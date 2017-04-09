//
// Created by blacknote on 08.04.17.
//

#include "Markdown.h"

Markdown::Markdown( Regexpression* regex, InputString* instr ) {

    this->regex = regex;
    this->instr = instr;

}

std::string Markdown::replaceMarkdown() {

    return instr->getLine();

}

void Markdown::createHtmlFile( std::string path_file ) {

    std::string newline = replaceMarkdown();
    std::ofstream htmlfile( path_file );
    htmlfile << newline;

    while ( !instr->isEof() ) {
        htmlfile << std::endl;
        newline = replaceMarkdown();
        htmlfile << newline;
    }

    htmlfile.close();

}
