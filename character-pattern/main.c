
#include <stdio.h>

int main()
{
    int i,j,a;
    printf("enter the limit :");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++){
            printf("%c",64+j);
        }
       printf("\n") ;
    }

    return 0;
}

