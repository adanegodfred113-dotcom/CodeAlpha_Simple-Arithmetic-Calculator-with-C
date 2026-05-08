#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("========================================\n");
    printf("       BASIC ARITHMETIC CALCULATOR      \n");
    printf("========================================\n");
    printf("  Operators:  + | - | * | /             \n");
    printf("========================================\n\n");

    printf("Enter first number  : ");
    scanf("%lf", &num1);

    printf("Enter operator (+/-/*/): ");
    scanf(" %c", &operator);

    printf("Enter second number : ");
    scanf("%lf", &num2);

    printf("\n----------------------------------------\n");

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("  %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("  %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("  %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("  Error: Division by zero is undefined!\n");
            } else {
                result = num1 / num2;
                printf("  %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("  Error: Invalid operator '%c'!\n", operator);
            printf("  Please use one of: + - * /\n");
    }

    printf("----------------------------------------\n");
    return 0;
}
