#include<stdio.h>
int num(int a){
int i;
if(a<=1){
return 0;
}
for(i=2;i<a;i++){
   if(a % i==0){
    return 0;
   } 
}
return 1;
}


int main()
{
int n1;
printf("Enter the number:");
scanf("%d",&n1);
if(num(n1)==1){
    printf("%d is a prime number...\n",n1);
}
else{
    printf("%d is not a prime number...\n",n1);
}
return 0;
}