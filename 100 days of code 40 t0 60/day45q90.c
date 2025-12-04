/*

Q90 (Strings)

Toggle case of each character in a string.
Show Sample Test Cases
Input 1:
Hello
Output 1:
hELLO
*/




#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // to uppercase
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // to lowercase
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
