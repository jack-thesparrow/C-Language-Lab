#include <stdio.h>

int main() {
    printf("Getting the integers between two numbers!\n");
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check if the numbers are equal
    if (num1 == num2) {
        printf("There are no integers in between!\n");
    } else {
        // Determine the smaller and larger number
        int start = (num1 < num2) ? num1 : num2;
        int end = (num1 > num2) ? num1 : num2;

        printf("The numbers between %d and %d are: ", start, end);
        
        // Print integers between start and end
        for (int i = start + 1; i < end; i++) {
            printf("%3d ", i);
        }
        
        // If there are no integers in between
        if (start + 1 == end) {
            printf("There are no integers in between!\n");
        }
        
        printf("\n"); // New line for better readability
    }

    return 0;
}

