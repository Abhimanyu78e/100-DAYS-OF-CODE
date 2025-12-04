/*

Q86 (Strings)

Check if a string is a palindrome.
Show Sample Test Cases
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome
*/




#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int len = 0;
    while(str[len] != '\0') {
        len++;
    }

    int i = 0, j = len - 1;
    int flag = 1;

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
