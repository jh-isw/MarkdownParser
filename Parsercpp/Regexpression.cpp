//
// Created by blacknote on 08.04.17.
//

#include <stdio.h>
#include <stdarg.h>
#include <iostream>
#include "Regexpression.h"

Regexpression::Regexpression() {


}

void Regexpression::regexh1( std::stringstream* instrstream ) {

    std::string line;
    std::stringstream retstrstream;
    std::regex regh1search( "^#{1}[^#]" );
    std::regex regh1op( "^#{1}[\\s\\t]+|^#{1}" );
    std::regex regh1cl( "(([\\s\\t])+$|$)" );

    while( getline( *instrstream, line ) ) {

        if ( !isEof( instrstream ) ) {

            if( std::regex_search( line, regh1search ) ) {

                line = regex_replace( line, regh1op, "<h1>" );
                line = regex_replace( line, regh1cl, "</h1>" );
                retstrstream << line << std::endl;

            } else{

                retstrstream << line << std::endl;

            }

        } else {

            std::cout << "failed to read line" << std::endl;

        }

    }

    instrstream->swap( retstrstream );

}

void Regexpression::regexh2( std::stringstream* instrstream ) {

    std::string line;
    std::stringstream retstrstream;
    std::regex regh1search( "^#{2}[^#]" );
    std::regex regh1op( "^#{2}[\\s\\t]+|^#{2}" );
    std::regex regh1cl( "([\\s\\t]+)$|$" );

    while( getline( *instrstream, line ) ) {

        if ( !isEof( instrstream ) ) {

            if( std::regex_search( line, regh1search ) ) {

                line = regex_replace( line, regh1op, "<h2>" );
                line = regex_replace( line, regh1cl, "</h2>" );
                retstrstream << line << std::endl;

            } else{

                retstrstream << line << std::endl;

            }

        } else {

            std::cout << "failed to read line" << std::endl;

        }

    }

    instrstream->swap( retstrstream );

}
/*
std::string Regexpression::regexlist(std::string) {
    return std::__cxx11::string();
}

std::string Regexpression::regexbold(std::string line) {


    std::regex regboldsearch( "^\*{2}(^\\s)" );

    if(std::regex_search( line,regboldsearch )) {

        std::string retline;
        std::regex regh1op( "^\*{2}" );
        std::regex regh1cl( "(\*{2})$|[^\\s\\t]$" );
        retline = regex_replace( line, regh1op, "<h1>" );
        retline = regex_replace( retline, regh1cl, "</h1>" );
        return retline;

    } else
        return line;

}

std::string Regexpression::regexitalic(std::string) {
    return std::__cxx11::string();
}

std::string Regexpression::regexquote(std::string) {
    return std::__cxx11::string();
}*/

bool Regexpression::isEof(std::stringstream* instrstream) {

    if ( instrstream->eof() )
        return true;

    return false;

}