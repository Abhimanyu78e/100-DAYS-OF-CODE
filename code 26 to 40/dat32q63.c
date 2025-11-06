#include <stdio.h>
//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
int main (){
    int n1,n2;
    printf("Enter the space for first array: ");
    scanf("%d",&n1);
    int array1[n1];
    for(int i =0;i<n1;i++){
        printf("Enter the digits: ");
    scanf("%d",&array1[i]);  
    }
    printf("Enter the space for array2: ");
    scanf("%d",&n2);
    int array2[n2];
    for(int i =0;i<n2;i++){
        printf("Enter the digits :");
    scanf("%d",&array2[i]);  
    }
    int merged[n1+n2];
    for(int i = 0;i<n1;i++){
        merged[i]=array1[i];
    }
    for(int i =0; i<n2; i++){
        merged[n1+i]=array2[i];
    }
    for(int i =0 ; i<n1+n2;i++){
        printf(" %d\t ",merged[i]);

    }
    
    return 0; 
}