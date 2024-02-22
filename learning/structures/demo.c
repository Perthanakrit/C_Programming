#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct __Student
{
    char firstName[20];
    char lastName[20];
    char *id;
    double score;
};

typedef struct __Student Student;

int main(int argc, char const *argv[])
{
    Student student;

    strcpy(student.firstName, "John");
    sprintf(student.lastName, "Doe");
    student.id = (char *)malloc(7 * sizeof(char));
    strcpy(student.id, "123456");

    /* code */
    return 0;
}

void Array_student()
{
    Student students[5];
    students[0].id = (char *)malloc(7 * sizeof(char));
}

Student *create(char first[], char last[], char id[], double score)
{
    Student *student = (Student *)malloc(sizeof(Student));
    strcpy(student->firstName, first);
    strcpy(student->lastName, last);
    student->id = (char *)malloc(7 * sizeof(char));
    strcpy(student->id, id);
    student->score = score;
    return student;
}
