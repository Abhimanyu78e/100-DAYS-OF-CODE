/*

Q92 (Strings)
 
Find the first repeating lowercase alphabet in a string.
Show Sample Test Cases
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int freq[26] = {0};
    int i = 0;

    while(str[i] != '\0') {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            if(freq[ch - 'a'] == 2) {
                printf("%c", ch);
                return 0;
            }
        }
        i++;
    }

    return 0;
}
