#include <stdio.h>

int main() {
    int a = 250;
    int j=0,k=0,l=0;
    int *p;
    long int d = a *(long) a;
    float f = 4.67;
    int e = 4;
    int c = (int)f + e;
    p=&a;
    *p=400;
    p++;
    *p=5555;

    //printf("a = %d, d = %ld, f = %f, e = %d, c = %d, ",a,d,f,e,c);
    printf("a = %d, p = %p, j = %d, j = %d, l = %d, ",a,p,j,k,l);
    return 0;
}