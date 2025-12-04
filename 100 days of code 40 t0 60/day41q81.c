/*

Q81 (Strings)
Count characters in a string without using built-in length functions.
Show Sample Test Cases
Input 1:
Hello
Output 1:
5
Input 2:
 
Output 2:
1




*/







#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int count = 0;
    while(str[count] != '\0') {
        count++;
    }

    printf("%d", count);
    return 0;
}
