#include <math.h>
#include<stdio.h>
int main(){
    float a,b,c,s,A;
    printf("Enter the three side  of triangle :");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("the value of s is=%2f\n",s);
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of a triangle=%f\n",A);
    return 0;

}