
//Q23: Write a program to calculate library fine based on late days as follows: 
#include<stdio.h>

int main(void)
{
    int days;
    int fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if(days <= 5)
    {
        fine = (days * 2);
    }
    else if(days > 5 && days <= 10)
    {
        fine = 10 + (days - 5) * 4;
    }
    else if(days > 10 && days <= 30)
    {
        fine = 30 + (days - 10) * 6;
    }
    
    if(days > 30)
    {
        printf("Membership Cancelled!");
    }
    else if(days >= 0)
    {
        printf("Fine: Rs.%d", fine);
    }

    return 0;
}