/*

Q91 (Strings)

Remove all vowels from a string.
Show Sample Test Cases
Input 1:
education
Output 1:
dctn
*/


#include <stdio.h>

int main() {
    char str[1000], result[1000];
    gets(str);

    int i = 0, j = 0;

    while(str[i] != '\0') {
        char ch = str[i];

        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
             ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {
            result[j] = ch;
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("%s", result);
    return 0;
}
