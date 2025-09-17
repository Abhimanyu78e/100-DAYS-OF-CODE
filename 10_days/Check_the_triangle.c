#include<stdio.h>
int main()
{
int a,b,c,x;
printf("Enter the first side of triangle:");
scanf("%d",&a);
printf("Enter the second side of triangle:");
scanf("%d",&b);
printf("Enter the third side of triangle:");
scanf("%d",&c);
if((a+b>c)&&(a+c>b)&&(b+c>a)){

printf("The triangle is valid\n");
}
if(a==b&&b==c){
    printf("This is an equilateral triangle\n");
}
else if(a == b || b == c || a == c) {
    printf("It is an Isosceles triangle.\n");
}
else{
    printf("It is an scalene triangle\n");

}
if((a*a==b*b+c*c)||
(b*b==a*a+c*c)||
(c*c==b*b+a*a))
{


    printf("It is a right angled triangle");
}
else{

    printf("Not");
}
return 0;
}