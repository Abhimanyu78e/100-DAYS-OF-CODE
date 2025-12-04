/*
Q93 (Strings)

Check if two strings are anagrams of each other.
Show Sample Test Cases
Input 1:
listen
silent
Output 1:
Anagrams
Input 2:
hello
world
Output 2:
Not anagrams
*/



#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    gets(str1);
    gets(str2);

    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0;

    while(str1[i] != '\0') {
        freq1[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while(str2[i] != '\0') {
        freq2[(unsigned char)str2[i]]++;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
