#include <iostream>
#include <fstream>
#include <regex>
#include "InputString.h"
#include "Markdown.h"


int main() {

    InputString* instring;
    Markdown* markdown;
    Regexpression* regexpression;

    std::ifstream* mdfile = new std::ifstream( "/home/blacknote/MarkdownParser/MarkdownParser/Parsercpp/SiteExample.markdown" );

    if( mdfile->good() ) {
        instring = new InputString( mdfile );
    } else {
        mdfile->close();
    }

    regexpression = new Regexpression();
    markdown = new Markdown( instring,  regexpression );


    markdown->createHtmlFile( "/home/blacknote/MarkdownParser/MarkdownParser/Parsercpp/SiteExample.html" );

    delete( regexpression );
    delete( instring );
    delete( markdown );
    return 0;
}