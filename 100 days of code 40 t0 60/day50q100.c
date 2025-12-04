#include <stdio.h>
#include <string.h>
//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            if (!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }

    printf("\n");
    return 0;
}