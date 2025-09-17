//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 




#include<stdio.h>

int main(void)
{
    int grade;

    printf("Enter Percentage: ");
    scanf("%d", &grade);

    if(grade <= 100 && grade >= 90)
    {
        printf("Grade A\n");
    }
    else if(grade <= 89 && grade >= 80)
    {
        printf("Grade B\n");
    }
    else if(grade <= 79 && grade >= 70)
    {
        printf("Grade C\n");
    }
    else if(grade <= 69 && grade >= 60)
    {
        printf("Grade D\n");
    }
    else if(grade <= 60)
    {
        printf("Grade F\n");
    }

    return 0;
}