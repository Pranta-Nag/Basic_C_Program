// To calculate the sum of squares of first N natural numbers using the mathematical formula

#include <stdio.h>

int main() {
    int n;
    int sum;

    printf("Enter a positive number (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number.\n");
    } else {
        sum = n * (n + 1) * (2 * n + 1) / 6;
        printf("Sum of squares from 1 to %d = %d\n", n, sum);
    }

    return 0;
}
