//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_INPUTSTRING_H
#define PARSER_INPUTSTRING_H

#include <iostream>
#include <sstream>
#include <fstream>

class InputString{

    std::fstream* mdfile;

public:
    InputString( std::fstream* );
    std::string getLine();
    bool isEof();
    ~InputString();

};

#endif //PARSER_INPUTSTRING_H
