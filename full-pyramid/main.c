#include <stdio.h>
void main(){
    
    int i,j,a,k;
    printf("enter the limit :");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=(a-i);j++){
            
            printf(" ");
        
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        
        
        printf("\n") ;
        
    }
    
}


