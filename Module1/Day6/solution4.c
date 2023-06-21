#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sort_students(struct Student *students, int num_students) {
    for (int i=0; i<num_students - 1; i++) {
        for (int j=0; j<num_students-i-1; j++) {
            if (students[j].marks < students[j+1].marks) {
                // Swap the students
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

void display_students(const struct Student *students, int num_students) {
    printf("Student Details:\n");
    for (int i=0; i<num_students; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollno, students[i].name, students[i].marks);
    }
}

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student *students = malloc(num_students * sizeof(struct Student));

    // Input details for each student
    for (int i=0; i<num_students; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(students[i].rollno));

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &(students[i].marks));

        printf("\n");
    }

    sort_students(students, num_students);

    display_students(students, num_students);

    free(students);
    return 0;
}
