//
// Created by blacknote on 08.04.17.
//

#include <stdio.h>
#include <stdarg.h>
#include "Regexpression.h"

Regexpression::Regexpression() {


}

std::string Regexpression::regexh1( std::string line ) {

    std::regex regh1search( "^#{1}[^#]" );

    if(std::regex_search( line,regh1search )) {

        std::string retline;
        std::regex regh1op( "^#{1}" );
        std::regex regh1cl( "([\\s\\t]+)$|[^\\s\\t]$" );
        retline = regex_replace( line, regh1op, "<h1>" );
        retline = regex_replace( retline, regh1cl, "</h1>" );
        return retline;

    } else
        return line;

}

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

    /*
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
    */
}

std::string Regexpression::regexitalic(std::string) {
    return std::__cxx11::string();
}

std::string Regexpression::regexquote(std::string) {
    return std::__cxx11::string();
}