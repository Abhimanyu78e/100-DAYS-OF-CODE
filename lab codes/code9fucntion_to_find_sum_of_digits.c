#include<stdio.h>
int num(int a){
    
  int sum=0;
  while(a!=0){
    sum=sum+(a%10);
    a=a/10;
  }
  return sum;
}
int main(){
int n1;
int result;
printf("Enter the number:");
scanf("%d",&n1);
result=num(n1);

printf("The sum of digits is %d.....",result);





    return 0;

}