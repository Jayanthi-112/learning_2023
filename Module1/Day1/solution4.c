#include <stdio.h>

int main() {
    float n1,n2, result;
    char operator;

    // Read the Operand 1
    printf("Enter Operand 1: ");
    scanf("%f", &n1);

    // Read the Operator
    printf("Enter Operator (ex: +, -, *, /): ");
    scanf(" %c", &operator);

    // Read  the Operand 2
    printf("Enter Operand 2: ");
    scanf("%f", &n2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = n1+n2;
            break;
        case '-':
            result = n1-n2;
            break;
        case '*':
            result = n1*n2;
            break;
        case '/':
            // If division by zero
            if (n2 != 0) {
                result = n1/n2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit the program with an error code
    }

    // Printing the result
    printf("Result: %.2f\n", result);

    return 0;
}