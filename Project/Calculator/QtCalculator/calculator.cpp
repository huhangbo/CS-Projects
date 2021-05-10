#include "calculator.h"
calculator::calculator()
{
    TParser::trigonometryMode mode = TParser::Radians;
    parser.setTrigonometryMode(mode);
}

void calculator::setExpression(QString str)
{
    str1 = str;
}

void calculator::setMode(TParser::trigonometryMode mode)
{
    parser.setTrigonometryMode(mode);
}

void calculator::calculate()
{
    if(str1.isEmpty()) throw err(1);
    if(str1.contains('=')) throw err(3);
    QByteArray ba = str1.toLatin1();
    char *c_str2 = ba.data();
    parser.Decompile();
    try {
        parser.Compile(c_str2);
        parser.Evaluate();
    } catch (TError) {
        throw err(4);
    }
    result = QString::number(parser.GetResult());
    if(result == "inf") throw err(2);
}

QString calculator::getResult()
{
    return result;
}
