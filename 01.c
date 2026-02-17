// C program that takes two numbers from the user and displays their quotient and remainder

#include <stdio.h>

int main() {
    int num1, num2;
    int quotient, remainder;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check division by zero
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        quotient = num1 / num2;
        remainder = num1 % num2;

        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    }

    return 0;
}
