
//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.





#include<stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b)
    {
        if(a == b && b == c && c == a)
        {
            printf("Equilateral Triangle\n");
        }
        else if(a == b && b != c || b == c && c != a || c == a && c != b)
        {
            printf("Isosceles Triangle\n");
        }
        else
        {
            printf("Scalene Triangle\n");
        }
    }
    else
    {
        printf("Invalid Triangle!\n");
    }

    return 0;
}