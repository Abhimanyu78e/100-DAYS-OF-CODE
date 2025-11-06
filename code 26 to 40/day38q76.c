#include <stdio.h>
//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[n][n];
    for (int x = 0; x < n; x++)
        for (int y = 0; y < n; y++)
            scanf("%d", &array[x][y]);

    int flag = 1;
    for (int x = 0; x < n; x++)
        for (int y = 0; y < n; y++)
            if (array[x][y] != array[y][x])
                flag = 0;

    if (flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}