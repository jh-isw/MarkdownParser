//
// Created by blacknote on 08.04.17.
//

#ifndef PARSER_MARKDOWN_H
#define PARSER_MARKDOWN_H

#include "Regexpression.h"
#include "InputString.h"

class Markdown{
    std::string* formatedstring;


public:
    Markdown(Regexpression*, InputString*);
    void replaceMarkdown();
    void createHtmlFile();

};



#endif //PARSER_MARKDOWN_H
