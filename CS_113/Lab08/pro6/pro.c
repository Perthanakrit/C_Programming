#include <stdio.h>

/*
    -1.0 - 5i *  -2.0 - 3i = (-1 * -2 - (-5 * -3)) + (-1 * -3 + -5 * -2)i = 7 + 1i
    -1.0 - 5i +  -2.0 - 3i = (-1 - 2) + (-5 - 3)i = -3 - 8i
*/

struct complex
{
    float real;
    float imag;
};

struct complex add_complex(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

struct complex multiply_complex(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real * num2.real - (num1.imag * num2.imag);
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

void print_complex(char *text, struct complex complexNum)
{
    if (complexNum.imag < 0)
    {
        if (complexNum.real == 0)
            printf("%s%.1fi\n", text, complexNum.imag);
        else if (complexNum.imag == 0)
            printf("%s%.1f\n", text, complexNum.real);
        else
            printf("%s%.1f - %.1fi\n", text, complexNum.real, -complexNum.imag);
    }
    else
    {
        if (complexNum.real == 0)
            printf("%s%.1fi\n", text, complexNum.imag);
        else if (complexNum.imag == 0)
            printf("%s%.1f\n", text, complexNum.real);
        else
            printf("%s%.1f + %.1fi\n", text, complexNum.real, complexNum.imag);
    }
}

int main()
{
    struct complex C, D, E, F;
    printf("Enter C: ");
    scanf("%f %f", &C.real, &C.imag);

    printf("Enter D: ");
    scanf("%f %f", &D.real, &D.imag);

    E = add_complex(C, D);
    F = multiply_complex(C, D);
    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}