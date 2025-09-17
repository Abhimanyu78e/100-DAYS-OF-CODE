//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
float  r,area,circumferance, pi=3.14;
printf("Enter the raduis of the circle:");
scanf("%f",&r);
circumferance=2*pi*r;
area=pi*r*r;
printf("The circumferance of the circle :%f",circumferance);
printf("\nThe area of the circle:%f",area);
return 0;






}
