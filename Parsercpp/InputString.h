//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_INPUTSTRING_H
#define PARSER_INPUTSTRING_H

#include <iostream>
#include <sstream>
#include <fstream>

class InputString{

    std::ifstream* mdfile;
    char* buffstr;
    void loadBuffstr();

public:
    InputString( std::ifstream* );
    std::string getLine();
    bool isEof();
    char* getBuffStr();
    ~InputString();

};

#endif //PARSER_INPUTSTRING_H
