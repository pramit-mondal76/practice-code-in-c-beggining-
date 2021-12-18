#include <stdio.h>
int main()
{
    int unit;
    float amount;
    printf("Enter the total units :");
    scanf("%d", &unit);
    if (unit <= 200)
    {
        amount = unit * .50;
    }
    else if (unit > 200 && unit <= 400)
    {
        amount = 100 + ((unit - 200) * .65);
    }
    else if (unit > 400 && unit <= 600)
    {
        amount = 250 + ((unit - 400) * .80);
    }
    else
    {
        amount = 425 + ((unit - 600) * 1.25);
    }
    printf("Eletricity Bil =RS %f", amount);
    return 0;
}