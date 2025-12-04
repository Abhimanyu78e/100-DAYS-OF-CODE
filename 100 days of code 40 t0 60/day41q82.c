/*


Q82 (Strings)

Print each character of a string on a new line.
Show Sample Test Cases
Input 1:
Hi
Output 1:
H
i






*/





#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int i = 0;
    while(str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
