
//Q27: Write a program to print the sum of the first n odd numbers.


#include<stdio.h>

int main()
{
    int i, n, num = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum += num;
        num += 2;
    }

    printf("%d", sum);

    return 0;
}