#include <stdio.h>

typedef struct stu
{
    char id[12];
    int midterm;
    int final;
} Student;

char calculateGrade(int midterm, int final)
{
    if (midterm + final >= 80)
    {
        return 'A';
    }
    else if (midterm + final >= 70)
    {
        return 'B';
    }
    else if (midterm + final >= 60)
    {
        return 'C';
    }
    else if (midterm + final >= 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main(int argc, char const *argv[])
{
    int size = 5;
    char grade;
    Student students[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter Student ID: ");
        scanf("%s", students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Student ID %s receives grade %c.\n", students[i].id, calculateGrade(students[i].midterm, students[i].final));
    }

    return 0;
}
