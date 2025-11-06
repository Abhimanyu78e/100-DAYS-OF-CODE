#include <stdio.h>
//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    
    
    scanf("%d %d", &x1, &y1);
    int a[x1][y1];
    for (int i = 0; i < x1; i++)
        for (int j = 0; j < y1; j++)
            scanf("%d", &a[i][j]);
    
    
    scanf("%d %d", &x2, &y2);
    int b[x2][y2];
    for (int i = 0; i < x2; i++)
        for (int j = 0; j < y2; j++)
            scanf("%d", &b[i][j]);
    
    
    if (x1 != x2 || y1 != y2) {
        printf("Matrix addition not possible");
        return 0;
    }
    
    int sum[x1][y1];
    for (int i = 0; i < x1; i++)
        for (int j = 0; j < y1; j++)
            sum[i][j] = a[i][j] + b[i][j];
    
    
    for (int i = 0; i < x1; i++) {
        for (int j = 0; j < y1; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}