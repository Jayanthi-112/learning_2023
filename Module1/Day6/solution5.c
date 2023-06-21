<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudents(const struct Student *students, int numStudents, const char *searchName) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found!\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n",
                   students[i].rollno, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    int numofStudents;
    printf("Enter the number of students: ");
    scanf("%d",&numofStudents);

    struct Student *students = malloc(numofStudents * sizeof(struct Student));

    // Input details for each student
    for (int i=0; i<numofStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d",&(students[i].rollno));

        printf("Name: ");
        scanf("%s",students[i].name);

        printf("Marks: ");
        scanf("%f",&(students[i].marks));

        printf("\n");
    }

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s",searchName);

    searchStudents(students, numofStudents, searchName);

    free(students);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudents(const struct Student *students, int numStudents, const char *searchName) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found!\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n",
                   students[i].rollno, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    int numofStudents;
    printf("Enter the number of students: ");
    scanf("%d",&numofStudents);

    struct Student *students = malloc(numofStudents * sizeof(struct Student));

    // Input details for each student
    for (int i=0; i<numofStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d",&(students[i].rollno));

        printf("Name: ");
        scanf("%s",students[i].name);

        printf("Marks: ");
        scanf("%f",&(students[i].marks));

        printf("\n");
    }

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s",searchName);

    searchStudents(students, numofStudents, searchName);

    free(students);
    return 0;
}
>>>>>>> 15a147daa7e2b5d0fab15c17eda9dbe8d9c6e3b6
