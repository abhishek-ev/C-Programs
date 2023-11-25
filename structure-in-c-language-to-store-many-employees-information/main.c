#include<stdio.h>
#include<string.h>

struct employee{
    int id;
    char name[50];
    float salary;
}e1,e2;

void main(){
    e1.id=100;
    strcpy(e1.name,"abhi");
    e1.salary=1000;
    
    e2.id=101;
    strcpy(e2.name,"Shek");
    e2.salary=2000;
    
    printf("e1 id is %d\n",e1.id);
    printf("e1 name is %s\n",e1.name);
    printf("e1 salary is %f\n",e1.salary);
    
    printf("e2 id is %d\n",e2.id);
    printf("e2 name is %s\n",e2.name);
    printf("e2 salary is %f\n",e2.salary);
    
    
    
    
}