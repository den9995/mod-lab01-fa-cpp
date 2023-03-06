// Copyright 2022 UNN-IASR
#include "fun.h"
#include <ctype.h>

unsigned int faStr1(const char *str) {
    bool isWord = 0, isWrong = 0;
    int i = 0, count = 0;
    while(str[i] != 0){
        char curr=str[i];
        if(isspace(curr)){
            if(isWord && !isWrong){
                count++;
            }
            isWord = 0;
            isWrong = 0;
            i++;
        }
        if(!isspace(curr)){
            isWord = 1;
            if(isdigit(curr)){
                isWrong = 1;
            }
            i++;
        }

    }
    if(isWord && !isWrong){
        count++;
    }
    return count;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
