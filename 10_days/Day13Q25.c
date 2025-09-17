 
//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    int result;

    printf("Enter two numbers and an operator: ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op) 
    {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) 
            {
                result = num1 / num2;
                printf("%d\n", result);
            } 
            else 
            {
                printf("Division by zero is not allowed!\n");
            }
            break;
        case '%':
            if (num2 != 0) 
            {
                result = num1 % num2;
                printf("%d\n", result);
            } 
            else 
            {
                printf("Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}