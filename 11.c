// C program to calculate the factorial of a number

#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;  // int only

    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
