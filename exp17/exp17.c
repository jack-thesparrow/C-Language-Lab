#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a Prime number.\n", n);
        return 0;
    }

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d is a Prime number.\n", n);
    } else {
        printf("%d is not a Prime number.\n", n);
    }

    return 0;
}

