/* Here is a C program that checks:

Whether a character is letter or digit

Whether it is a vowel or consonant (if letter)

Whether it is a special character */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);   // space before %c to avoid newline issue

    // 1) Letter or Digit or Special Character
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("It is a Letter.\n");

        // 2) Vowel or Consonant
        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
            ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            printf("It is a Vowel.\n");
        } else {
            printf("It is a Consonant.\n");
        }
    }
    else if (ch >= '0' && ch <= '9') {
        printf("It is a Digit.\n");
    }
    else {
        printf("It is a Special Character.\n");
    }

    return 0;
}
