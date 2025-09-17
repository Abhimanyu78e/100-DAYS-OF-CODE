
//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>

int main()
{
    float cp, sp, diff, profit, loss;

    printf("Enter Cost price and Selling price: ");
    scanf("%d %d", &cp, &sp);

    if(sp > cp)
    {
        diff = sp - cp;
        profit = (diff / cp) * 100;
        printf("Profit : %.0f %%\n", profit);
    }
    else if(cp > sp)
    {
        diff = cp - sp;
        loss = (diff / cp) * 100;
        printf("Loss : %.0f %%\n", loss);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}