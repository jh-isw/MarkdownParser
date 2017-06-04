//
// Created by blacknote on 08.04.17.
//

#include <regex>
#include "Markdown.h"

Markdown::Markdown( InputString* instr, Regexpression* regexp ) {

    this->instr = instr;
    this->regexp = regexp;

}


void Markdown::replaceMarkdown(std::stringstream* strstream) {

    regexp->regexh1(strstream);
    regexp->regexh2(strstream);
    regexp->regexbold(strstream);
    std::cout << strstream->rdbuf();
    std::cout << "end of stream" << std::endl;
   // retline = regexp->regexh2(retline);

    //return retline;

}


void Markdown::createHtmlFile( std::string path_file ) {

    std::ofstream htmlfile( path_file );

    replaceMarkdown( instr->getStrStream() );
    //std::cout << instr->getBuffStr() << std::endl;


    //newline = instr->getLine();
    //std::cout << newline << std::endl;
    //std::cout << instr->getBuffStr() << std::endl;
    htmlfile << instr->getStrStream() << std::endl;

    htmlfile.close();

}
