/*
Q89 (Strings)

Count frequency of a given character in a string.
Show Sample Test Cases
Input 1:
programming
g
Output 1:
2
*/


#include <stdio.h>

int main() {
    char str[1000], ch;
    gets(str);
    scanf("%c", &ch);

    int count = 0, i = 0;

    while(str[i] != '\0') {
        if(str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d", count);
    return 0;
}
