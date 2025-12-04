/*
Q94 (Strings)

Find the longest word in a sentence.
Show Sample Test Cases
Input 1:
I love programming
Output 1:
programming*/


#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int maxLen = 0, currLen = 0, endIndex = 0, i = 0;

    while(str[i] != '\0') {
        if(str[i] != ' ') {
            currLen++;
        } else {
            if(currLen > maxLen) {
                maxLen = currLen;
                endIndex = i - 1;
            }
            currLen = 0;
        }
        i++;
    }

    if(currLen > maxLen) {
        maxLen = currLen;
        endIndex = i - 1;
    }

    for(i = endIndex - maxLen + 1; i <= endIndex; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
