#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks of student: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Student Grade is Grade A\n");
    } 
    else if (marks >= 75 && marks <= 89) {
        printf("Student Grade is Grade B\n");
    }
     else if (marks >= 60 && marks <= 74) {
        printf("Student Grade is Grade C\n");
    } 
    else if (marks >= 50 && marks <= 59) {
        printf("Student Grade is Grade D\n");
    } 
    else if (marks >= 0 && marks <= 49) {
        printf("Student Grade is Grade F\n");
    } 
    else {
        printf("Invalid marks\n");
    }

    return 0;
}
