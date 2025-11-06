#include <stdio.h>
//Q77: Check if the elements on the diagonal of a matrix are distinct

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int array[x][y];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            scanf("%d",&array[i][j]);

    if (x !=  y) {
        printf(" False"); //
        return 0;
    }

    int flag = 1;


    for (int i = 0; i < x; i++) {
        for (int j = i + 1; j < y; j++) {
            if (array[i][i] == array[j][j]) {
                flag = 0;
                break;
            }


        }
        if (!flag)
            break;

    }

    if (flag)
        printf("True");
    else
        printf("False");
        

    return 0;
}