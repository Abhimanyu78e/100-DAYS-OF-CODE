/*

Q96 (Strings)

Reverse each word in a sentence without changing the word order.
Show Sample Test Cases
Input 1:
I love coding
Output 1:
I evol gnidoc*/



#include <stdio.h>

int main() {
    char str[1000];
    gets(str);

    int i = 0, start = 0;

    while(1) {
        if(str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;

            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            if(str[i] == '\0')
                break;

            start = i + 1;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
