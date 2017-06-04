// MarkdownParserCore.cpp : Definiert die exportierten Funktionen für die DLL-Anwendung.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <regex>
#include "InputString.h"
#include "Markdown.h"
#include "Regexpression.h"

using namespace std;

#ifdef MARKDOWNPARSERCORE_EXPORTS
#define MARKDOWNPARSERCORE_API __declspec(dllexport) 
#else
#define MARKDOWNPARSERCORE_API __declspec(dllimport) 
#endif

namespace MarkdownParserCore {
	extern "C" MARKDOWNPARSERCORE_API double Add(double a, double b)
	{
		return a + b;
	}

	extern "C" MARKDOWNPARSERCORE_API int parse() {
		InputString* instring;
		Markdown* markdown;
		Regexpression* regexpression;

		std::ifstream* mdfile = new std::ifstream("..\\..\\..\\README.md");

		if (mdfile->good()) {
			instring = new InputString(mdfile);
		}
		else {
			mdfile->close();
			cout << "No valid file." << endl;
			return 1;
		}

		regexpression = new Regexpression();

		markdown = new Markdown(instring, regexpression);

		markdown->createHtmlFile("..\\..\\..\\README.html");

		delete(regexpression);
		delete(instring);
		delete(markdown);
		return 0;
	}
}
