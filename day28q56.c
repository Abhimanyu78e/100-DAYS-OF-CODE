#include <stdio.h>
//Q56: Read and print elements of a one-dimensional array.


/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/


void arrry(int array[],int n){
    for(int i = 0 ; i<n;i++){
        printf("enter the digit %d: ",i );
        scanf("%d",&array[i]); 
    
    }
}
int main (){
    int n ;
    
     printf("enter the size of the araay: ");
     scanf("%d",&n);
     int ary[n];

    arrry(ary,n);
    for(int b  = 0 ;b<n;b++){
        printf(" %d\t", ary[b] ); 
    }
    return 0 ; 

}