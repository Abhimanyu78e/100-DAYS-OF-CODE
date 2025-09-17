//Q6 (User Inputs, Operations & Output)
//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the first no:\n");
scanf("%d",&a);
printf("Enter the second no:\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("After swaping\n");
printf("First no:%d\n",a);
printf("Second no:%d\n",b);
return 0;
}
    