//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_REGEXPRESSION_H
#define PARSER_REGEXPRESSION_H


#include <vector>

typedef const std::pair<char*,char*>* regexp;

class Regexpression{
    std::vector<regexp>* regcon;


public:
    Regexpression();
    void setRegex(regexp regexp1, ...);
    unsigned long getSize();
};

#endif //PARSER_REGEXPRESSION_H
