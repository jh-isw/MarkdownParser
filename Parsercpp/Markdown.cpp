//
// Created by blacknote on 08.04.17.
//

#include <regex>
#include "Markdown.h"

Markdown::Markdown( InputString* instr, Regexpression* regexp ) {

    this->instr = instr;
    this->regexp = regexp;

}


void Markdown::replaceMarkdown(char* buffstr) {

    std::string retline;
    regexp->regexh1(buffstr);
   // retline = regexp->regexh2(retline);

    //return retline;

}


void Markdown::createHtmlFile( std::string path_file ) {

    std::ofstream htmlfile( path_file );

    replaceMarkdown( instr->getBuffStr() );
    //std::cout << instr->getBuffStr() << std::endl;


    //newline = instr->getLine();
    //std::cout << newline << std::endl;
    //std::cout << instr->getBuffStr() << std::endl;
    htmlfile << instr->getBuffStr() << std::endl;

    htmlfile.close();

}
