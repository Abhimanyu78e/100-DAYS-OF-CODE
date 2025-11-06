#include <stdio.h>
//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
void sumofarray(int array[],int n ){
    int sum = 0;
    for(int i =0 ; i<n;i++){
        printf("enter the digit %d : ",i);
        scanf("%d",&array[i]);
    
        sum += array[i];

    }
    printf("sum of the arrays %d",sum);

}
int main (){
    int n ; 
    printf("Enter the space :");
    scanf("%d",&n);
    int ayy[n];
    sumofarray(ayy,n);
    return 0;

}