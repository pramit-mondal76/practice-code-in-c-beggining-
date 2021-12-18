#include<stdio.h>
int main (){
    int n,reminder;
    printf("Enter a number :");
    scanf("%d",&n);
    reminder=n%2;
    switch(reminder){
        case 0:
        printf("Number is even ");
        break;
        case 1 :
        printf("Number is odd ");
        break;
    }
     
    return 0;
}