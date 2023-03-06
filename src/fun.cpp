// Copyright 2022 UNN-IASR
#include "fun.h"
#include <ctype.h>

unsigned int faStr1(const char *str) {
    bool isWord = 0, isWrong = 0;
    int i = 0, count = 0;
    while (str[i] != 0) {
        char curr = str[i];
        if (isspace(curr)) {
            if (isWord && !isWrong) {
                count++;
            }
            isWord = 0;
            isWrong = 0;
            i++;
        }
        if (!isspace(curr)) {
            isWord = 1;
            if (isdigit(curr)) {
                isWrong = 1;
            }
            i++;
        }
    }
    if (isWord && !isWrong) {
        count++;
    }
    return count;
}

unsigned int faStr2(const char *str) {
    bool isWord = 0, isWrong = 0;
    int i = 0, count = 0;
    while (str[i] != 0) {
        char curr = str[i];
        if (isspace(curr)) {
            if (isWord && !isWrong) {
                count++;
            }
            isWord = 0;
            isWrong = 0;
            i++;
        }
        if (!isspace(curr)) {
            if (!isWord && !isupper(curr)) {
                isWrong = 1;
            }
            if (isWord && !islower(curr)) {
                isWrong = 1;
            }
            isWord = 1;
            i++;
        }
    }
    if (isWord && !isWrong) {
        count++;
    }
    return count;
}

unsigned int faStr3(const char *str) {
    bool isWord = 0;
    int i = 0, count = 0, wordsLen = 0, fullLen = 0;
    while (str[i] != 0) {
        char curr = str[i];
        if (isspace(curr)) {
            if (isWord) {
                count++;
            }
            isWord = 0;
            i++;
        }
        if (!isspace(curr)) {
            isWord = 1;
            wordsLen++;
            i++;
        }
    }
    if (isWord) {
        count++;
    }
    return (wordsLen + count / 2) / count;
//  return wordsLen / count + (wordsLen % count > count / 2) ? 1 : 0
//  return round((float) wordsLen / count);
}
