#include <stdio.h>
/*

Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
int main (){
    int a =9 ;
    for(int i =1 ; i<=a ; i = i+2){
        for(int b=1 ; i>=b;b++){
            printf("*");
        }
        printf("\n");
    }
        
      int m = 1;  

    for(int f = 7; f>=m ;f=f-2){
        
        for(int d =1; d<=f ; d++){
            printf("*");
        }
        printf("\n");

    }
    return 0;

}