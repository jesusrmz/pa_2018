#include <stdio.h>
#include "operation.h"

void printTestMessage(int,char*,char*);

int main()
{
    //test add
    int a = 2147483644;
    int b = 2;
    int resulta = add(a, b);
    int expecteda = a + b;
    printTestMessage(resulta == expecteda, "Addition test passed", "Addition test failed");

    //test sub
    int c = 2147483647;
    int d = 2147483647;
    int results = sub(c, d);
    int expecteds = c - d;
    printTestMessage(results == expecteds, "Subtraction test passed", "Subtraction test failed");
    return 0;
}

void printTestMessage(int testResult, char *passedMessage, char *failedMessage)
{
    if (testResult)
    {
        printf("%s\n", passedMessage);
    }
    else
    {
        printf("%s\n", failedMessage);
    }
}