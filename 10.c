// C program to calculate the sum of first n natural numbers

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input! Please enter a positive number.\n");
    } else {
        sum = n * (n + 1) / 2;
        printf("Sum of first %d natural numbers = %d\n", n, sum);
    }

    return 0;
}
