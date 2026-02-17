// C program for a basic calculator that can perform addition, subtraction, multiplication, and division

#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // note the space before %c

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculation based on operator
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator == '/') {
        if (num2 == 0) {
            printf("Error! Division by zero.\n");
        } else {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
