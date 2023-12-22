#include <stdio.h>
#include <stdlib.h>

int is_prime(int i)
{
    int count = 1, n2, j = 1;
    if (i >= 2)
    {
        for (; j <= 19; j++)
        {
            if (i % j == 0 && i > 9)
            {
                count += 1;
            }
            if (count > 2)
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
