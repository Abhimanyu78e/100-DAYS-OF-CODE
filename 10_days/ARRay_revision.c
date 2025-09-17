//Array Revison practice



#include <stdio.h>

int main() {
    int arr[5];   
    int i, sum = 0;
    float avg;

    
    printf("Enter 5 numbers:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("You entered: ");
    for(i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }

    
    for(i=0; i<5; i++) {
        sum += arr[i];
    }
    avg = sum / 5.0;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f\n", avg);

    return 0;
}
