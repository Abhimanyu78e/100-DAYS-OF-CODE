#include <stdio.h>
//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
int main (){
    int n,even , odd ; 
    printf("enter the space of array : ");
    scanf("%d",&n);
    int araay[n];
    for(int i = 0 ;i<n; i++ ){
        printf("Enter the digit %d : ",i);
        scanf("%d",&araay[i]);
    }
    odd = 0 ;
    even = 0;
    for(int i = 0; i<n ; i++){
       if(araay[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("odd : %d   even : %d",odd,even);
    return 0 ; 

}