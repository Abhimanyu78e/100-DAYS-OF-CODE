#include <stdio.h>

int num(int a) {
int reversed = 0,original = a;k
while(a > 0) {
    reversed = reversed * 10 + a % 10;
    a = a / 10;
    }
return (original == reversed);
}

int main() {
    int n1, result;
    printf("Enter the number: ");
    scanf("%d", &n1);
    result = num(n1);
    if(result == 1)
    printf("The entered number is a palindrome....");
    else{
        printf("Not a palindrome...");
    }

    return 0;
}
