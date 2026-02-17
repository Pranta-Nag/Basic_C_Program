// C program to check whether a number is prime or not

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a Prime number.\n", num);
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("%d is not a Prime number.\n", num);
                return 0; // stop the program if divisible
            }
        }
        printf("%d is a Prime number.\n", num);
    }

    return 0;
}
