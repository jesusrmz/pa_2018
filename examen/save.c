#include <stdio.h>
#include <string.h>
int main()
{
    int tamanoP,tamanoV;
    int ban;
    int NumP;
    char p[1000001];
    char v[1000001];
    scanf("%d",&NumP);
    while(NumP--)
    {
        int t=0;
        scanf("%s",p);scanf("%s",v);
        tamanoP = strlen(p);
        tamanoV = strlen(v);
        
        for(int i=0;i<=(tamanoP-tamanoV);i++)
        {
            ban=0;
            for(int j=0;j<tamanoV;j++)
                if(p[i+j]==v[j])
                   ban++;
                
            if((ban==tamanoV)||(ban==(tamanoV-1)))
            {
                t=1;
                printf("%d ",i);
            }   
        }
        if(!t){
            printf("No Match!");
        } 
        printf("\n");
    }    
    return 0;
} 
