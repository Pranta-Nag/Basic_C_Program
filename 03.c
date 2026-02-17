//C program that takes a person's birth year as input and displays their age (based on the current year)

#include <stdio.h>

int main() {
    int birthYear, currentYear, age;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    printf("Enter current year: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;

    if (age < 0) {
        printf("Invalid input! Birth year cannot be greater than current year.\n");
    } else {
        printf("Your age is: %d years\n", age);
    }

    return 0;
}
