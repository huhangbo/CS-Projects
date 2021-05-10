#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>
#include "parser.h"

class calculator
{
public:
    calculator();

    void setExpression(QString str);
    void setMode(TParser::trigonometryMode mode);
    void calculate();
    QString getResult();

    enum err
    {
        emptyExpression = 1,
        divByZero = 2,
        expressionContainsEqual = 3,
        failed = 4
    };

private:
    QString str1;
    QString result;
    TParser parser;
};

#endif // CALCULATOR_H
