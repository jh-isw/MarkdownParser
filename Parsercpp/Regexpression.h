//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_REGEXPRESSION_H
#define PARSER_REGEXPRESSION_H


#include <vector>

typedef <char[],char[]> regex;

class Regexpression{
    std::vector* regexcon<char[],char []>;


public:
    Regexpression();
    void setRegex(regex ,...);
    int getSize();
};

#endif //PARSER_REGEXPRESSION_H
