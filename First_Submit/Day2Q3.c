//Q3 (User Inputs, Operations & Output)
//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()

{

int l,b,area,perimeter;
printf("Enter the lenth of the rectangle:");
scanf("%d",&l);
printf("Enter the breadth:");
scanf("%d",&b);
perimeter=2*(l+b);
area=l*b;
printf("The perimeter of the rectangle :%d",perimeter);

printf("\nThe area of the rectangle:%d",area);


return 0;

}



