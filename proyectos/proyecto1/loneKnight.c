#include "loneKnight.h"

char chararray[] = {'a','b','c','d','e','f','g','h'};
int numChar=8;

int loneKnight (char character, int number){
    int pC =0;
    int cA =0;
    int i = 0;
    while(i < numChar){
        if(character == chararray[i]){
            pC = i;
        };
        i++;
    };
    i = 0;
    if (pC-2 >= 0){
        i++;
    };
    if (pC+2 <=7){
        i++;
    };
    if (number-1 >= 1){
        cA += i;
    };
    if (number+1 <= 8){
        cA += i;
    };
    i = 0;
    if (number-2 >= 1){
        i++;
    };
    if (number+2 <=8){
        i++;
    };
    if (pC-1 >= 0){
        cA += i;
    };
    if (pC+1 <= 7){
        cA += i;
    };
    return cA;
};