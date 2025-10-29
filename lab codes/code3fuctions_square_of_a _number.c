#include<stdio.h>
int square(int a){
int result;
result=a*a;
printf("The square of the given no:%d",result);

}
int main()
{

int num1;
printf("Enter the no");
scanf("%d",&num1);
square(num1);




    return 0;
}