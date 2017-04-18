//
// Created by blacknote on 08.04.17.
//

#include "InputString.h"

InputString::InputString( std::ifstream *mdfile ) {

    this->mdfile = mdfile;
    strstream = new std::stringstream();
    *strstream << mdfile->rdbuf();

    loadBuffstr();

}

void InputString::loadBuffstr() {

    if(mdfile->is_open()) {

        std::streambuf *stream = mdfile->rdbuf();
        std::streamsize size = stream->pubseekoff(0, mdfile->end);

        stream->pubseekoff(0, mdfile->beg);
        buffstr = new char[size];

        stream->sgetn(buffstr, size);


    }else
        std::cout << "failed to load Bufferstring" << std::endl;

}

/*
std::string InputString::getLine() {

    char buff[100];

    if ( mdfile->getline( buff, 100 ) )
        return buff;


}*/

bool InputString::isEof() {

    if ( mdfile->eof() == true )
        return true;
    return false;

}


char *InputString::getBuffStr() {
    return buffstr;
}


std::stringstream* InputString::getStrStream() {
    return strstream;
}

InputString::~InputString() {

    mdfile->close();
    delete ( buffstr );
    delete ( mdfile );

}