/*
Here is a simple C program that:

Takes marks as input

Checks if marks ≤ 100

Displays Grade Point (out of 5.00)

Displays GPA

Otherwise shows "Invalid input"

*/


#include <stdio.h>

int main() {
    int marks;
    float gradePoint;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid input\n");
    }
    else if (marks >= 80) {
        gradePoint = 5.00;
        printf("Grade Point = %.2f\n", gradePoint);
        printf("GPA = A+\n");
    }
    else if (marks >= 70) {
        gradePoint = 4.00;
        printf("Grade Point = %.2f\n", gradePoint);
        printf("GPA = A\n");
    }
    else if (marks >= 60) {
        gradePoint = 3.50;
        printf("Grade Point = %.2f\n", gradePoint);
        printf("GPA = A-\n");
    }
    else if (marks >= 50) {
        gradePoint = 3.00;
        printf("Grade Point = %.2f\n", gradePoint);
        printf("GPA = B\n");
    }
    else if (marks >= 40) {
        gradePoint = 2.00;
        printf("Grade Point = %.2f\n", gradePoint);
        printf("GPA = C\n");
    }
    else if (marks >= 33) {
        gradePoint = 1.00;
        printf("Grade Point = %.2f\n", gradePoint);
        printf("GPA = D\n");
    }
    else {
        gradePoint = 0.00;
        printf("Grade Point = %.2f\n", gradePoint);
        printf("GPA = F\n");
    }

    return 0;
}
