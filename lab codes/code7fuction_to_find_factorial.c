#include<stdio.h>
int num(int a){
    int i;
    int fact=1;
   for(i=1;i<=a;i++){
    fact=fact*i;

   }
   return fact;

}

int  main(){
int n1;
int result;
printf("Enter the number:");
scanf("%d",&n1);
result=num(n1);
printf("The factorial of the given number is %d\n",result);
return 0;

}