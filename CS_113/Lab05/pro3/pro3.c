#include <stdio.h>

float caluculated_value(float initail, float value, char operator)
{
    if (operator== '+')
    {
        return initail + value;
    }
    else if (operator== '-')
    {
        return initail - value;
    }
    else if (operator== '*')
    {
        return initail * value;
    }
    else if (operator== '/')
    {
        return initail / value;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char operator[3];
    float initail_value;

    printf("Initial Value: ");
    scanf("%f", &initail_value);
    printf("\n");

    while (1)
    {
        float input_value;

        printf("Operator: ");
        scanf("%s", operator);
        if (operator[0] != '+' && operator[0] != '-' && operator[0] != '*' && operator[0] != '/')
        {
            break;
        }

        printf("Input Value: ");
        scanf("%f", &input_value);
        initail_value = caluculated_value(initail_value, input_value, operator[0]);
        printf("Present Value is %.4f\n\n", initail_value);
    }

    printf("\nFinish Calculation. Final Value is %.4f\n", initail_value);

    return 0;
}