

//Q2 (User Inputs, Operations & Output)

//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{

int a,b,sum,sub,mul;
float div;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("\nThe sum of the two numbers is :%d",sum);
printf("\nThe subtraction of the two numbers is :%d",sub);
printf("\nThe multiplication of the two numbers is :%d",mul);
printf("\nThe division of the two numbers is :%f",div);
return 0;





}
