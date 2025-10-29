#include<stdio.h>
int add(int a,int b)
{
    int result;
    result=a+b;
    printf("result:%d",result);
}
int main(){
int num1,num2;
printf("First no:");
scanf("%d",&num1);
printf("Second no:");
scanf("%d",&num2);
add(num1,num2);
return 0;
}