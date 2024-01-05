#include <stdio.h>

int main()
{
    int n, i;
    double divider = 1.0;
    double result;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            result += (4.0 / divider);
        else
            result -= (4.0 / divider);
        divider += 2.0;
    }
    printf("%.10f\n", result);
    return 0;
}
