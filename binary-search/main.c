
#include <stdio.h>

int binarysearch(int arr[], int low,int high,int key)
{
   if(high<low)
   return -1;
   
   int mid=(low+high)/2;
   
   if(arr[mid]==key)
   return mid;
   
   if(key>mid)
   return binarysearch(arr,(mid+1),high,key);
   return binarysearch(arr,low,(mid-1),key);
    

}



int main()
{
    
    int arr[] = {2,3,4,5,6,7,8};
    int n;
    int key;
    
   n = sizeof(arr)/sizeof(arr[0]);
   key=8;
   printf("index %d\n",binarysearch(arr,0,(n-1),key));
    

    return 0;
}
