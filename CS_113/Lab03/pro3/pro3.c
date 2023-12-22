#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputN1[7], inputN2[7];
    int n1, n2;
    int fac, divisor;
    int is_divide;

    fgets(inputN1, 7, stdin);
    n1 = atoll(inputN1);
    fac = n1;
    fgets(inputN2, 7, stdin);
    n2 = atoll(inputN2);
    divisor = n2;
    is_divide = n1 % n2 == 0;

    if (n1 < n2)
    {
        fac = n2;
        divisor = n1;
    }

    while (fac % divisor != 0)
    {
        int temp = fac % divisor; // 10 5
        fac = divisor;
        divisor = temp;
    }

    n1 /= divisor;
    n2 /= divisor;

    is_divide ? printf("= %d\n", n1) : printf("= %d/%d\n", n1, n2);
    return 0;
}
