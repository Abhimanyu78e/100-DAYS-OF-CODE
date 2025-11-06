#include <stdio.h>
//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
int main(){
    int n;
    
    printf("Enter the number ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        printf("enter the digits: ");
        scanf("%d",&array[i]);
   }
   int max = array[0];
    int second = array[0];
   for(int i =0 ; i<n; i++){
    if(array[i]>max){
        max = array[i];
    }
    
   }
   second = array[0];
    for(int i = 0; i < n; i++) {
        if( array[i]>second && array[i] < max)
            second = array[i];
    }
    printf("the second highest number %d",second);
    return 0; 


}