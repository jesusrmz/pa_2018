#include <stdio.h>
#include "counterCulture.h"

int counterCulture(int number){
    int a = 0;
    int contar = 0;
    if(number <= 20){
        contar=number;
    }
    else{
        while(a<number){
            a+=1;
            int tempa = a;
            int tempfa = a+1;
            if(a<number){
                int temp1=0;
                int temp2=0;
                while(tempa){
                    temp1 = temp1*10 + tempa%10;
                    tempa = tempa/10;
                }
                while(tempfa!=0){
                    temp2 = temp2*10 + tempfa%10;
                    tempfa = tempfa/10;
                }
                if(temp2 < temp1 || temp2 > number){
                    a=temp1;
                    //contar++;
                }
            }
            contar++;
        }
        contar++;
    }
    
    return contar;
}