/*

Q87 (Strings)

Count spaces, digits, and special characters in a string.
Show Sample Test Cases
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1



*/




#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int spaces = 0, digits = 0, special = 0, i = 0;

    while(str[i] != '\0') {
        char ch = str[i];

        if(ch == ' ') {
            spaces++;
        }
        else if(ch >= '0' && ch <= '9') {
            digits++;
        }
        else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // do nothing for alphabets
        }
        else {
            special++;
        }

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
