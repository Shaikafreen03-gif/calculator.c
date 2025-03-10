#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    
    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    
    printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter second number: ");
    scanf("%lf", &num2);

    
    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2lf\n", num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
