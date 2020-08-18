#ifndef EMITTER_H
#define EMITTER_H

#include <iomanip>
#include <string>
#include "global.hpp"

extern int getRelationalOperatorToken(std::string text);
extern int getSignOperatorToken(std::string text);
extern int getMulopOperatorToken(std::string text);

class MakeASM {
private:
    std::stringstream stream;
    bool checkType(int input1, bool isValue1, int input2, bool isValue2);
public:
    void writeToStream(std::string str);
    void writeToStream(std::string str1, std::string str2);
    void genAssemblerCode(int token, int input1, bool isValue1, int input2, bool isValue2);
    void writeToFile();
};

#endif