#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salaryInput[22];
    float salary;
    float paid_tax;

    fgets(salaryInput, 20, stdin);

    salary = atof(salaryInput);

    if (salary >= 0.0f)
    {
        if (salary < 300000.01f)
        {
            paid_tax = (5.0f / 100) * salary;
        }
        else
        {
            paid_tax += (5.0f / 100) * 300000.0f;
            salary -= 300000.0f;
            paid_tax += (10.0f / 100) * salary;
        }
        printf("%.2f\n", paid_tax);
    }
    else
    {
        printf("Error: Salary must be greater or equal to 0\n");
    }

    return 0;
}