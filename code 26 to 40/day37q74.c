#include <stdio.h>
//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
int main (){
    int x , y;
    scanf("%d %d",&x,&y);
    int array[x][y]; 
    for(int i =0 ; i<x;i++){
        for(int j =0; j<y;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i= 0; i<y;i++){
        for(int j= 0;j<x;j++){
            printf(" %d  ",array[j][i]);
        }
        printf("\n");
    }
    return 0;
}