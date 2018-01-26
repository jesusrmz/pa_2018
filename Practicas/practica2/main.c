#include <stdio.h>
#include "operation.h"

int main(){
    char operations[200];
    int operador1,operador2;
    printf("%s\n","What is the operation?");
    scanf("%s",operations);
    scanf("%d %d",&operador1,&operador2);
    printf("result: %d",add(operador1,operador2));
    return 0;
}