#include<stdio.h>
void  num(int a){
    int result;
    if(  a%2==0){
        printf("The given number is even.....");   
    }
    else{
        printf("The given number is odd.....");
    }
}
int main(){

int n1;

printf("Enter the value:");
scanf("%d",&n1);
num(n1);
return 0;
}