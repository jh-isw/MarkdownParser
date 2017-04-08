//
// Created by blacknote on 08.04.17.
//

#include <stdio.h>
#include "Regexpression.h"

Regexpression::Regexpression() {

}

void Regexpression::setRegex(regexp regexp1, ...){

    va_list regex;
    //va_start(regex, regexp1);

    /*for(regexp regexpn : regex){

    }*/
}


unsigned long Regexpression::getSize() {
    return regcon->size();
}
