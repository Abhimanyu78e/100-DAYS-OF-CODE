#include <stdio.h>
//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

int main (){
    int n,max,min  ; 
    printf("Enter the space:");
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++){
        printf("enter the the value of %d : ",i);
        scanf("%d",&array[i]);
    }
    max = min = array[0];
    for(int i=0 ; i<n;i++){
        if(array[i]>max){
           max = array[i];
            
        }
        if(array[i]<min){
            min = array[i];


        }


    }
     printf("the max is %d\t",max);
      printf("the min is %d",min);
      return 0;




    
}