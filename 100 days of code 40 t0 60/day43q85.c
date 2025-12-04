/*

Q85 (Strings)

Reverse a string.
Show Sample Test Cases
Input 1:
abcd
Output 1:
dcba




*/






#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int i = 0, len = 0;

    while(str[len] != '\0') {
        len++;
    }

    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
