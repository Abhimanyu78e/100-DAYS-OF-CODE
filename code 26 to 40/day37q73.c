#include <stdio.h>
//Q73: Find the sum of each row of a matrix and store it in an array.
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/
int main (){
    int x,y;
    int sum =0;
    printf("Enter the rows amd coloum :");
    scanf("%d  %d",&x,&y);
    int array[x][y];
    for(int i =0; i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i = 0;i<x;i++){
        for(int j=0;j<y;j++){
            sum = array[i][j]+sum;
        }
        printf("the add of %d row = %d",i,sum);
        sum=0;
    }
    return 0;
}