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

    while( getline( *instrstream, line ) ) {

        if ( !isEof( instrstream ) ) {

            if( std::regex_search( line, regh1search ) ) {

                line = regex_replace( line, regh1op, "<h1>" );

                std::regex regh1clcond1( "[\\s\\t]+$" );
                std::regex regh1clcond2( "$" );

                if( std::regex_search( line, regh1clcond1 ) )
                    line = regex_replace( line, regh1clcond1, "</h1>" );
                else if( std::regex_search( line, regh1clcond2 ) )
                    line = regex_replace( line, regh1clcond2, "</h1>" );

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
    std::regex regh2search( "^#{2}[^#]" );
    std::regex regh2op( "^#{2}[\\s\\t]+|^#{2}" );

    while( getline( *instrstream, line ) ) {

        if ( !isEof( instrstream ) ) {

            if( std::regex_search( line, regh2search ) ) {

                line = regex_replace( line, regh2op, "<h2>" );

                std::regex regh2clcond1( "[\\s\\t]+$" );
                std::regex regh2clcond2( "$" );

                if( std::regex_search( line, regh2clcond1 ) )
                    line = regex_replace( line, regh2clcond1, "</h2>" );
                else if( std::regex_search( line, regh2clcond2 ) )
                    line = regex_replace( line, regh2clcond2, "</h2>" );

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
*/

void Regexpression::regexbold( std::stringstream* instrstream ) {


    std::string line;
    std::stringstream retstrstream;
    std::regex regboldsearch( "(\\*\\*)(\\w)*(\\*\\*)" );
    std::regex regh2op( "(?<=(\\*\\*){1})" );

    while( getline( *instrstream, line ) ) {

        if ( !isEof( instrstream ) ) {

            if( std::regex_search( line, regboldsearch ) ) {

                line = regex_replace( line, regh2op, "<b>" );

                //std::regex regh2clcond1( "[\\s\\t]+$" );
                //std::regex regh2clcond2( "$" );

                //if( std::regex_search( line, regh2clcond1 ) )
                    line = regex_replace( line, regh2op, "</b>" );
                //else if( std::regex_search( line, regh2clcond2 ) )
                    //line = regex_replace( line, regh2clcond2, "</h2>" );

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
std::string Regexpression::regexitalic(std::string) {
    return std::__cxx11::string();
}

std::string Regexpression::regexquote(std::string) {
    return std::__cxx11::string();
}*/

bool Regexpression::isEof( std::stringstream* instrstream ) {

    if ( instrstream->eof() )
        return true;

    return false;

}