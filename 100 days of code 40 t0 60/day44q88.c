/*
Q88 (Strings)

Replace spaces with hyphens in a string.
Show Sample Test Cases
Input 1:
hello world
Output 1:
hello-world
*/



#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int i = 0;
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
