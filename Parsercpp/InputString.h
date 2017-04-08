//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_INPUTSTRING_H
#define PARSER_INPUTSTRING_H

#include <iostream>
#include <sstream>

class InputString{
    std::string* instring;
    ~InputString();

public:
    InputString(char[]);
    //InputString();    std Stream als input
    std::string getStr();

};

#endif //PARSER_INPUTSTRING_H
