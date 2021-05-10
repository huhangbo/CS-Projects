#include <math.h>
#include "parser.h"

#define OP_PLUS          0
#define OP_MINUS         1
#define OP_MULTIPLY      2
#define OP_DIVIDE        3
#define OP_PERCENT       4
#define OP_POWER         5
#define OP_UMINUS        6
#define OP_SIN           7
#define OP_COS           8
#define OP_TG            9
#define OP_CTG           10
#define OP_EXP           11
#define OP_LG            12
#define OP_LN            13
#define OP__PERCENT      14
#define OP_SQRT          15
#define M_PI             3.141592653589
TParserNode *TParser::CreateNode(double _value, TParserNode *_left, TParserNode *_right)
{
   TParserNode *pNode = new TParserNode(_value, _left, _right);
   history.push_back(pNode);
   return pNode;
}

void TParser::SendError(int errNum)
{
   static char *errs[7] = { NULL,
                            NULL,
                            "Unexpected end of expression",
                            "End of expression expected",
                            "'(' or '[' expected",
                            "')' or ']' expected",
                            NULL
                         };
   static char buffer[80];
   
   int len = strlen(curToken);
   
   if(*curToken=='\0')
      strcpy(curToken, "EOL");

   switch(errNum)
   {
      case 0:
         errs[0] = buffer;
         break;

      case 1:
         errs[1] = buffer;
         break;

      case 6:
         errs[6] = buffer;
         break;
   }

   TError error(errs[errNum], pos-len);

   for(int i=0; i<history.size(); i++)
      delete history[i];
   history.clear();

   root = NULL;

   throw error;

   return;
}
   
bool TParser::GetToken(void)
{
   *curToken = '\0';
   
   while(expr[pos]==' ') pos++;
   
   if(expr[pos]=='\0')
   {
      curToken[0] = '\0';
      typToken = PARSER_END;
      return true;
   }
   else if(IsDelim())
   {
      curToken[0] = expr[pos++];
      curToken[1] = '\0';
      switch(*curToken)
      {
         case '+': typToken = PARSER_PLUS; return true;
         case '-': typToken = PARSER_MINUS; return true;
         case '*': typToken = PARSER_MULTIPLY; return true;
         case '/': typToken = PARSER_DIVIDE; return true;
         case '%': typToken = PARSER_PERCENT; return true;
         case '^': typToken = PARSER_POWER; return true;
         case '(': typToken = PARSER_L_BRACKET; return true;
         case ')': typToken = PARSER_R_BRACKET; return true;
      }
   }
   else if(IsLetter())
   {
      int i=0;
      while(IsLetter()) curToken[i++] = expr[pos++];
      curToken[i] = '\0';

      int len = strlen(curToken);
      for(i=0; i<len; i++)
         if(curToken[i]>='A' && curToken[i]<='Z')
            curToken[i] += 'a' - 'A';

      else if(!strcmp(curToken, "pi"))     { typToken = PARSER_PI; return true; }
      else if(!strcmp(curToken, "sin"))    { typToken = PARSER_SIN; return true; }
      else if(!strcmp(curToken, "cos"))    { typToken = PARSER_COS; return true; }
      else if(!strcmp(curToken, "tg"))     { typToken = PARSER_TG; return true; }
      else if(!strcmp(curToken, "ctg"))    { typToken = PARSER_CTG; return true; }
      else if(!strcmp(curToken, "exp"))    { typToken = PARSER_EXP; return true; }
      else if(!strcmp(curToken, "lg"))     { typToken = PARSER_LG; return true; }
      else if(!strcmp(curToken, "ln"))     { typToken = PARSER_LN; return true; }
      else if(!strcmp(curToken, "sqrt"))   { typToken = PARSER_SQRT; return true; }
      else SendError(0);
   }
   else if(IsDigit() || IsPoint())
   {
      int i=0;
      while(IsDigit()) curToken[i++] = expr[pos++];
      if(IsPoint())
      {
         curToken[i++] = expr[pos++];
         while(IsDigit()) curToken[i++] = expr[pos++];
      }
      curToken[i] = '\0';
      typToken = PARSER_NUMBER;
      return true;
   }
   else
   {
      curToken[0] = expr[pos++];
      curToken[1] = '\0';
      SendError(1);
   }

   return false;
}      

bool TParser::Compile(char *_expr)
{
   pos = 0;
   expr = _expr;
   *curToken = '\0';
   if(root!=NULL)
   {
      DelTree(root);
      root = NULL;
   }

   history.clear();

   GetToken();
   if(typToken==PARSER_END) SendError(2);
   root = Expr();
   if(typToken!=PARSER_END) SendError(3);

   history.clear();

   return true;
}

TParserNode *TParser::Expr(void)
{
   TParserNode *temp = Expr1();

   while(1)
   {
      if(typToken==PARSER_PLUS)
      {
         GetToken();
         temp = CreateNode(OP_PLUS, temp, Expr1());
      }
      else if(typToken==PARSER_MINUS)
      {
         GetToken();
         temp = CreateNode(OP_MINUS, temp, Expr1());
      }
      else break;
   }

   return temp;
}
   
TParserNode *TParser::Expr1(void)
{
   TParserNode *temp = Expr2();

   while(1)
   {
      if(typToken==PARSER_MULTIPLY)
      {
         GetToken();
         temp = CreateNode(OP_MULTIPLY, temp, Expr2());
      }
      else if(typToken==PARSER_DIVIDE)
      {
         GetToken();
         temp = CreateNode(OP_DIVIDE, temp, Expr2());
      }
      else if(typToken==PARSER_PERCENT)
      {
         GetToken();
         temp = CreateNode(OP_PERCENT, temp, Expr2());
      }
      else break;
   }

   return temp;
}

TParserNode *TParser::Expr2(void)
{
   TParserNode *temp = Expr3();

   while(1)
   {
      if(typToken==PARSER_POWER)
      {
         GetToken();
         temp = CreateNode(OP_POWER, temp, Expr2());
      }
      else break;
   }

   return temp;
}

TParserNode *TParser::Expr3(void)
{
   TParserNode *temp;

   if(typToken==PARSER_PLUS)
   {
      GetToken();
      temp = Expr4();
   }
   else if(typToken==PARSER_MINUS)
   {
      GetToken();
      temp = CreateNode(OP_UMINUS, Expr4());
   }
   else
      temp = Expr4();

   return temp;      
}

TParserNode *TParser::Expr4(void)
{
   TParserNode *temp;

   if(typToken>=PARSER_SIN && typToken<=PARSER_X)
   {
      temp = CreateNode(OP_SIN-PARSER_SIN+typToken);
      GetToken();
      if(typToken!=PARSER_L_BRACKET) SendError(4);
      GetToken();
      temp->left = Expr();
      if(typToken!=PARSER_R_BRACKET) SendError(5);
      GetToken();
   }
   else
      temp = Expr5();

   return temp;
}

TParserNode *TParser::Expr5(void)
{
   TParserNode *temp;
   
   switch(typToken)
   {
      case PARSER_NUMBER:
         temp = CreateNode((double)atof(curToken));
         GetToken();
         break;

      case PARSER_PI:
         temp = CreateNode((double)M_PI);
         GetToken();
         break;

      case PARSER_L_BRACKET:
         GetToken();
         temp = Expr();
         if(typToken!=PARSER_R_BRACKET) SendError(5);
         GetToken();
         break;

      default:
         SendError(6);
   }

   return temp;         
}

double TParser::Evaluate(void)
{
   result = CalcTree(root);
   return result;
}

double TParser::CalcTree(TParserNode *tree)
{
   static double temp;
   
   if(tree->left==NULL && tree->right==NULL)
      return tree->value;
   else
      switch((int)tree->value)
      {
         case OP_PLUS:
            return CalcTree(tree->left)+CalcTree(tree->right);

         case OP_MINUS:
            return CalcTree(tree->left)-CalcTree(tree->right);

         case OP_MULTIPLY:
            return CalcTree(tree->left)*CalcTree(tree->right);

         case OP_DIVIDE:
            return CalcTree(tree->left)/CalcTree(tree->right);

         case OP_PERCENT:
            return (int)CalcTree(tree->left)%(int)CalcTree(tree->right);

         case OP_POWER:
            return (double)pow(CalcTree(tree->left),CalcTree(tree->right));

         case OP_UMINUS:
            return -CalcTree(tree->left);

         case OP_SIN:
            if(mode == Radians)
                return sin(CalcTree(tree->left));
            else
                return sin(CalcTree(tree->left)*(M_PI/180));

         case OP_COS:
            if(mode == Radians)
                return cos(CalcTree(tree->left));
            else
                return cos(CalcTree(tree->left)*(M_PI/180));

         case OP_TG:
            if(mode == Radians)
                return tan(CalcTree(tree->left));
            else
                return tan(CalcTree(tree->left)*(M_PI/180));

         case OP_CTG:
            if(mode == Radians)
                return 1.0/tan(CalcTree(tree->left));
            else
                return 1.0/tan(CalcTree(tree->left)*(M_PI/180));

         case OP_EXP:
            return exp(CalcTree(tree->left));

         case OP_LG:
            return log10(CalcTree(tree->left));

         case OP_LN:
            return log(CalcTree(tree->left));

         case OP_SQRT:
            return sqrt(CalcTree(tree->left));
      }

   return 0;
}

void TParser::DelTree(TParserNode *tree)
{
   if(tree==NULL) return;

   DelTree(tree->left);
   DelTree(tree->right);

   delete tree;

   return;
}

void TParser::setTrigonometryMode(TParser::trigonometryMode setMode)
{
    mode = setMode;
}
