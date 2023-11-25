
#include <stdio.h>

int main()
{
    int num,i,sum=0,temp;
    printf("enter the number");
    scanf("%d",&num);
    
    while(num>0)
    {
        temp=num%10;
        sum=sum+temp;
        num=num/10;
    }
printf("sum is %d",sum);
    return 0;
}
