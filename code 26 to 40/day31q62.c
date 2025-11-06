#include <stdio.h>
//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
int main(){
    int n ,revs;
    printf("Enter the space ");
    scanf("%d",&n);
    int reverse[n];
    for(int i = 0 ; i<n;i++){
        printf("Enter the numbers: ");
        scanf("%d",&reverse[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        revs = reverse[i];
        reverse[i] = reverse[n - i - 1];
        reverse[n - i - 1] = revs;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", reverse[i]);
    }
    return 0;
    
}