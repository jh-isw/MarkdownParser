//
// Created by blacknote on 08.04.17.
//

#include "stdafx.h"
#include <regex>
#include "Markdown.h"

Markdown::Markdown( InputString* instr, Regexpression* regexp ) {

    this->instr = instr;
    this->regexp = regexp;

}


void Markdown::replaceMarkdown(std::stringstream* strstream) {

    regexp->regexh1(strstream);
    regexp->regexh2(strstream);
	//regexp->regexbold(strstream);
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
	//TODO: https://msdn.microsoft.com/de-de/library/b0x1aatf.aspx
	//std::stringstream *StrStream = instr->getStrStream;
	//std::string content = StrStream->str();
	htmlfile << instr->getStrStream()->str() << std::endl;
	//htmlfile << content.c_str() << std::endl;

    htmlfile.close();

}
