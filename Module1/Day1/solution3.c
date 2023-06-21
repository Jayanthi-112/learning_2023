#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physics_Marks, math_Marks, chemistry_Marks;
    float total_Marks, percentage;

    // Reading the roll number
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    // Reading the full name
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    // Reading the marks in Physics, Math, and Chemistry
    printf("Enter Marks in Physics: ");
    scanf("%f", &physics_Marks);

    printf("Enter Marks in Math: ");
    scanf("%f", &math_Marks);

    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemistry_Marks);

    // Calculate  the total marks and percentage
    total_Marks = physics_Marks + math_Marks + chemistry_Marks;
    percentage = (total_Marks / 300) * 100;

    // Printing the summary
    printf("\n--- Summary ---\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics_Marks);
    printf("Math Marks: %.2f\n", math_Marks);
    printf("Chemistry Marks: %.2f\n", chemistry_Marks);
    printf("Total Marks: %.2f\n", total_Marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}