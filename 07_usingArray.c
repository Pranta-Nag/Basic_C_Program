#include <stdio.h>

int main() {
    int marks;
    
    // Minimum marks for each grade
    int minMarks[] = {80, 70, 60, 50, 40, 33, 0};
    
    // Grade points
    float gradePoint[] = {5.00, 4.00, 3.50, 3.00, 2.00, 1.00, 0.00};
    
    // GPA letters
    char grade[][3] = {"A+", "A", "A-", "B", "C", "D", "F"};

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid input\n");
    }
    else {
        for (int i = 0; i < 7; i++) {
            if (marks >= minMarks[i]) {
                printf("Grade Point = %.2f\n", gradePoint[i]);
                printf("GPA = %s\n", grade[i]);
                break;
            }
        }
    }

    return 0;
}

