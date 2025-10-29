#include<stdio.h>
int max(int a,int b){
    int result;
    if(a>b){
        return a;
    }
    else{
        return b;

    }

}
int main(){
    int num1,num2,result;
    
    printf("Enter the first no:");
    scanf("%d",&num1);
    printf("Enter the second no:");
    scanf("%d",&num2);
    result=max(num1,num2);
    

    printf("The maximum no is %d",result);
    return 0;

}