#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

void parse_string(char *input_string, struct Student *students, int num_students) {
    char *token = strtok(input_string, " ");
    int i = 0;

    while (token != NULL && i < num_students) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name));
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d",&num_students);

    getchar();
    struct Student *students = malloc(num_students * sizeof(struct Student));

    printf("Enter the student details:\n");

    for (int i=0; i<num_students; i++) {
        char input_string[100];
        fgets(input_string,sizeof(input_string),stdin);
        input_string[strcspn(input_string, "\n")] = '\0';  // Remove newline character

        parse_string(input_string, &students[i], num_students);
    }

    // Print the initialized array of structures
    printf("\nStudent Details:\n");
    for (int i=0; i<num_students; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollno, students[i].name, students[i].marks);
    }
    free(students);
    return 0;
}
