 #include <stdio.h>
#include<math.h>
int main() {
    
    int a, n, r;
    float tn, sum = 0;
    
    printf("  Enter First Number of an G.P Series:  ");
    scanf("%d", &a);
    printf("  Enter the Total Numbers in this G.P Series:  ");
    scanf("%d", &n);
    printf("  Enter the Common Ratio:  ");
    scanf("%d", &r);
    
    sum = (a * (1 - pow(r, n ))) / (1- r);
    tn = a * (pow(r, n - 1));
    
    printf("\n The Sum of Geometric Progression Series =  %f", sum);
    printf("\n The tn Term of Geometric Progression Series = %f \n", tn);
    return 0;
}
