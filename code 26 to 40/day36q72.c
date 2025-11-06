#include <stdio.h>
//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
int main (){
    int x,y;
    int sum=0;
    printf("Enteer row and coloum:");
    scanf("%d %d",&x,&y);
    int matrix[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int j=0;j<x;j++){
    for(int i=0;i<y;i++){
        sum = sum+matrix[j][i];
    }
    }
    printf("Sum %d",sum);
    return 0;
     
}