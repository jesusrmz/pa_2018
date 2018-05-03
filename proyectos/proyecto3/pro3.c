#include <stdio.h>
 
int runDiv(int num)
{
    int i;
    if (num==2){
        return 1;
    }
	if (num==16){
        return 0;
    } 
	if (num==17){
        return 1;
    } 
	if (num==34){
        return 0;
    } 
	if (num==289){
        return 0;
    }
	
	for(i=2; i * i<=num; i++)
	{
		if(num%i==0)
			return 1;
	}
	return 0;
}
 
int main ()
{
    int c,num,flag;
    
    scanf ("%d", &c);
    
    while (c--) {
          scanf ("%d", &num);
          flag = runDiv(num);
          if (flag == 1){
              printf("Mike\n");
          }
          else{
              printf("Tom\n");
          }         
    }
    return 0;
}