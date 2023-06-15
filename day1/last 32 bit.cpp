#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result;

    switch (oper_type) {
        case 1:
            // Set 1st bit
            result = num | 1;
            break;
        case 2:
            // Clear 31st bit
            result = num & ~(1 << 31);
            break;
        case 3:
            // Toggle 16th bit
            result = num ^ (1 << 16);
            break;
        default:
            printf("Invalid operation type\n");
            result = num; // Return the original number if operation type is invalid
            break;
    }

    return result;
}

int main() {
    int number, operationType;
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter operation type (1 for setting 1st bit, 2 for clearing 31st bit, 3 for toggling 16th bit): ");
    scanf("%d", &operationType);

    int result = bit_operations(number, operationType);
    printf("Result: %d\n", result);

    return 0;
}
