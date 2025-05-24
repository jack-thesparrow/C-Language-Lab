#include <stdio.h>

int main() {
    printf("Arithmetic operations based on user operations!\n");
    char op;
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Clear the input buffer before reading the operator
    while(getchar() != '\n'); // This will consume any leftover newline character

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf("%c", &op);

    switch (op) {
        case '+':
            printf("Sum: %d\n", num1 + num2);
            break;
        case '-':
            printf("Difference: %d\n", num1 - num2);
            break;
        case '*':
            printf("Product: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Quotient: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Modulus: %d\n", num1 % num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Enter a valid operator.\n");
            break;
    }

    return 0;
}
