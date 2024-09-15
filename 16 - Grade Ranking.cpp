#include <stdio.h>

int main() {
    float grade;
    char letterGrade;

    printf("Enter your grade: ");
    scanf("%f", &grade);

    if (grade >= 90) {
        letterGrade = 'A';
    } else if (grade >= 85) {
        letterGrade = 'B';
    } else if (grade >= 80) {
        letterGrade = 'C';
    } else if (grade >= 75) {
        letterGrade = 'D';
    } else if (grade >= 70) {
        letterGrade = 'F';
    } else {
        printf("Invalid Grade!\n");
        return 1; // Exiting the program due to an invalid grade
    }

    // Check if the grade is 'FAIL'
    if (letterGrade == 'F') {
        printf("Mag drop kana nga!\n");
    } else {
        printf("Your grade is %c\n", letterGrade);
    }

    return 0;
}

