//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_MARKDOWN_H
#define PARSER_MARKDOWN_H

#include "Regexpression.h"
#include "InputString.h"

class Markdown{

    Regexpression* regex;
    InputString* instr;
    std::string replaceMarkdown();

public:
    Markdown( Regexpression*, InputString* );
    void createHtmlFile( std::string );

};

#endif //PARSER_MARKDOWN_H
