
#include <stdio.h>
void sum(float , float);
void main()
{
    float x,y;
  printf("enter the values x & Y:");
  scanf("%f%f",&x,&y);
  sum(x,y);
   
}

void sum(float a,float b){
    float s=0;
    s=a+b;
    printf("sum is %f",s);
}
