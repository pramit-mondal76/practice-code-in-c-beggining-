#include<stdio.h>

int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
       mid=(high+low)/2;
       if(arr[mid]==element){
           return mid;
       }
       if(arr[mid]<element){
           low=mid+1;
       }
       else{
           high=mid-1;
       }
    }
    return -1;
}
int main(){
    int arr[]={1,2,6,8,9,12,17,25,27};
    int element=1;
    int size =sizeof(arr)/sizeof(int);
    int searchIndex=binarysearch(arr,size,element);
    printf("The element %d is found at index %d",element,searchIndex);
    return 0;
}