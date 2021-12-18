 #include<stdio.h>

 int main(){
     int A1,n,d,An,sum,i;
     printf("Enter the first term in sequence :");
     scanf("%d",&A1);
     printf("Enter the Total Numbers in this A.P Series: ");
     scanf("%d", &n);
     printf(" Please Enter the Common Difference:  ");
     scanf("%d", &d);

     An=A1+(n-1)*d;
     sum=n*(2*An+(n-1)*d)/2;
     printf("\n The Sum of Series A.P. : ");
    for(i = A1; i <= An; i = i + d)
    {
        if(i != An)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
    }
    printf("\n");
    return 0;
    
 }