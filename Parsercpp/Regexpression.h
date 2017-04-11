//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_REGEXPRESSION_H
#define PARSER_REGEXPRESSION_H


#include <vector>
#include <regex>

typedef const std::regex* regextype;

class Regexpression{



public:
    Regexpression();
    std::string regexh1(std::string);
    std::string regexh2(std::string);
    std::string regexlist(std::string);
    std::string regexbold(std::string);
    std::string regexitalic(std::string);
    std::string regexquote(std::string);

};

#endif //PARSER_REGEXPRESSION_H
