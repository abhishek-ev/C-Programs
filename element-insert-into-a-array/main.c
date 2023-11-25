
#include <stdio.h>

int insertelement(int arr[], int n,int key,int capacity)
{
   if(n>=capacity)
   
   return n;
   
   
   
    arr[n]=key;
    
    return (n+1);
    
    
}

int main()
{
    int arr[20]={2,3,4,5,12,7,8};
   int capacity=sizeof(arr)/sizeof(arr[0]);
   int n=7;
   int i,key=8;
   
  
   printf("arry before add a new elelment:\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
   
   n=insertelement(arr,n,key,capacity);
   
   printf("\nafter insertion:\n");
   for(i=0;i<n;i++)
   printf("%d\t",arr[i]);
   
    return 0;
}
