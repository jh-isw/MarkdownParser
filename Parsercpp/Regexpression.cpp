//
// Created by blacknote on 08.04.17.
//

#include <stdio.h>
#include <stdarg.h>
#include <iostream>
#include "Regexpression.h"

Regexpression::Regexpression() {


}

void Regexpression::regexh1( char* strbuff ) {

    //std::regex regh1search( "^#{1}[^#]" );
    std::regex regh1search( "#" );


    if( std::regex_search( strbuff, regh1search )) {

        std::cout << "#########################" << std::endl;
        std::string retline;
        std::regex regh1op( "#{1}[^#]" );
        std::regex regh1cl( "([\\s\\t]+)\\n|[^\\s\\t]\\n" );
        retline = std::regex_replace( strbuff, regh1op, "<h1>" );
        retline = std::regex_replace( strbuff, regh1cl, "</h1>" );
        std::string* strback = new std::string(retline);
        std::cout << strbuff << std::endl;
        //return retline;

    } /*else
        return line;*/

}
/*
std::string Regexpression::regexh2( std::string line ) {

    std::regex regh2search( "^#{2}[^#]" );

    if(std::regex_search( line,regh2search ) ) {

        std::string retline;
        std::regex regh2op( "^#{2}" );
        std::regex regh2cl( "([\\s\\t]+)$|[^\\s\\t]$" );
        retline = regex_replace( line, regh2op, "<h2>" );
        retline = regex_replace( retline, regh2cl, "</h2>" );
        return retline;

    } else
        return line;

}

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