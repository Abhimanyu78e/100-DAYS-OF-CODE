#include <stdio.h>
#include <string.h>
//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

int main() {
    char name[100];
    int len, i, lastSpace = -1;

    printf("Enter full name: ");
    gets(name);

    len = strlen(name);

    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    
    printf("%c.", name[0]);
    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);
    }

    
    printf(" %s\n", &name[lastSpace + 1]);

    return 0;
}