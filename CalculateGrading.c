#include <stdio.h>

// Function to determine the grade based on marks
void determineGrade(const int marks) {
    if (marks >= 0 && marks <= 34) {
        printf("Grade: Fail\n");
    } else if (marks >= 35 && marks <= 59) {
        printf("Grade: Second Class\n");
    } else if (marks >= 60 && marks <= 79) {
        printf("Grade: First Class\n");
    } else if (marks >= 80 && marks <= 95) {
        printf("Grade: Distinction\n");
    } else {
        printf("Invalid marks entered. Please enter marks between 0 and 95.\n");
    }
}

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);
    
    determineGrade(marks);

    return 0;
}
