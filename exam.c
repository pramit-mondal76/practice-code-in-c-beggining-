#include<stdio.h>
int main(){
    int number,rem;
    printf("Enter any number :");
    scanf("%d",&number);
    int count =0;
    while (number !=0)
    {
        rem=number%10;
        number=number/10;
        count++;
    }
    printf("%d",count);
    
    return 0;
}