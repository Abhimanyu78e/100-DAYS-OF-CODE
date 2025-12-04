/*

Q97 (Strings)

Print the initials of a name.
Show Sample Test Cases
Input 1:
John Doe
Output 1:
J.D.
*/


#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    if(str[0] != ' ')
        printf("%c.", str[0]);

    int i = 1;
    while(str[i] != '\0') {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            printf("%c.", str[i+1]);
        }
        i++;
    }

    return 0;
}
