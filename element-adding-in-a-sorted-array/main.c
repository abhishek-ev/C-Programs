
#include <stdio.h>

int insertsortarry(int arr[],int key,int n,int capacity){
    int i;

for(i=(n-1) ;i>=0 && arr[i]>key;i--)
arr[i+1]=arr[i];

arr[i+1]=key;

return (n+1);
}
int main()
{
    int arr[20]={1,12,13,14,15,16,17,18,19};
    int key=6;
    int n=9;
    int i;
    int capacity=sizeof(arr)/sizeof(arr[0]);
    
    printf("before adding element\n");
    for(i=0;i<n;i++)
    printf("%d\t", arr[i]);
    
    
    n=insertsortarry(arr,key,n,capacity);
    
    printf("\nafter adding element\n");
    for(i=0;i<n;i++)
    printf("%d\t", arr[i]);
    

    return 0;
}

