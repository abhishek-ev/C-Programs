#include <stdio.h>
void main(){
    
    int i,j,a;
    printf("enter the limit :");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++){
            if((i+j)<=a){
            printf(" ");}
            
            else{
            printf("*");}
        }
        printf("\n") ;
        
    }
    
}

