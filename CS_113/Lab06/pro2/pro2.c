#include <stdio.h>

int covert_num_grade(char grade[4])
{
    char grade_title = grade[0];
    if (grade_title == 'A' || grade_title == 'a')
        return 4;
    else if (grade_title == 'B' || grade_title == 'b')
        return 3;
    else if (grade_title == 'C' || grade_title == 'c')
        return 2;
    else if (grade_title == 'D' || grade_title == 'd')
        return 1;
    else if (grade_title == 'F' || grade_title == 'f')
        return 0;
    else
        return 0;
}

int main()
{
    int subject_num = 0, i;
    int total_grade = 0, total_credit = 0;
    float gpa;

    printf("Enter number of subject(s): ");
    scanf("%d", &subject_num);

    for (i = 1; i <= subject_num; i++)
    {
        int credit;
        char grade[4];
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%s", &credit, grade);
        total_grade += (credit * covert_num_grade(grade));
        total_credit += credit;
    }

    gpa = (float)total_grade / total_credit;
    printf("GPA = %.2f\n", gpa);
    return 0;
}