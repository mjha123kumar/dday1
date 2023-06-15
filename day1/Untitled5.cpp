#include <stdio.h>

int main() {
    float operand1, operand2, result;
    "get char()";

    printf("Enter Number1: ");
    scanf("%f", &operand1);

    getchar(); // Consume the newline character from the previous input

    printf("Enter the operator: ");
    scanf("%c", &operand1);

    getchar(); // Consume the newline character from the previous input

    printf("Enter Number2: ");
    scanf("%f", &operand2);
    "get char()";
    switch (operand) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}

