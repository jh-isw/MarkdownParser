//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_REGEXPRESSION_H
#define PARSER_REGEXPRESSION_H


#include <vector>
#include <regex>
#include <sstream>
#include <fstream>

typedef const std::regex* regextype;

class Regexpression{

    bool isEof(std::stringstream*);

public:
    Regexpression();
    void regexh1(std::stringstream*);
    void regexh2(std::stringstream*);
/*    std::string regexlist(std::string);
    std::string regexbold(std::string);
    std::string regexitalic(std::string);
    std::string regexquote(std::string);*/

};

#endif //PARSER_REGEXPRESSION_H
