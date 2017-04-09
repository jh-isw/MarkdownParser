//
// Created by blacknote on 08.04.17.
//

#include "InputString.h"

InputString::InputString( std::fstream *mdfile ) {

    this->mdfile = mdfile;

}

std::string InputString::getLine() {

    char buff[100];
    if ( mdfile->getline( buff, 100 ) )
        return buff;

}

bool InputString::isEof() {

    if ( mdfile->eof() == true )
        return true;
    return false;

}

InputString::~InputString() {

    mdfile->close();
    delete ( mdfile );

}