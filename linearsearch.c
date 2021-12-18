//LINEAR SEARCH-->SEARCHES FOR AN ELEMENT BY VISITING ALL THE ELEMENTS SEQUENTLUY UNTILL THE ELEMENT IS FOUND.
//IT IS APPLICABLE FOR  BOTH OF SORTED AND UNSORTED ARRY... 

#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{    for(int i=0;i<size;i++){
    if(arr[i]==element){
       return i;

    }
}
    return -1;
}
int main(){
    int arr[]={1,32,65,8,9,56,4,5};
    int element=4;
    int size=sizeof(arr)/sizeof(int);
    int searchindex=linearsearch(arr,size,element);
    printf("The element %d is found at index %d\n",element,searchindex);
    return 0;
}