#include<stdio.h>
int main(){
    float basic,da,rent,gross;
    printf("Enter the basics salary of mr.Sayan Ghosh :");
    scanf("%f",&basic);
    da=.74*basic;
    rent=.15*basic;
    gross =basic+da+rent;
    printf("The gross salary is =%f",gross);
    return 0;

}