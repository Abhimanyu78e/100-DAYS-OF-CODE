#include <stdio.h>
//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, num, i, j;
    
    // Step 1: Input
    scanf("%d", &n);         
    int arr[n + 1];          

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    scanf("%d", &num);       

    
    for (i = 0; i < n; i++) {
        if (num < arr[i]) {
            break;  
        }
    }

   
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    
    arr[i] = num;

    
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}