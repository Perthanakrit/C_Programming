#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// If a number is divisible by any integer between 2 and the square root, it is not prime.
int is_prime(int i)
{
    int j;
    if (i >= 2)
    {
        int limit = sqrt(i);
        for (j = 2; j <= limit; j++)
        {
            if (i % j == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int main()
{
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 1; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}
