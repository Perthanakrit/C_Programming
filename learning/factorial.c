#include <stdio.h>

int main()
{
    int n, i;
    long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        for (i = n; i > 1; i--)
        {
            fact *= i;
        }
    }

    printf("%d %ld\n", n, fact);
    printf("-done-\n");
    // printf("Factorial of %d = %ld\n", n, fact);

    return 0;
}
