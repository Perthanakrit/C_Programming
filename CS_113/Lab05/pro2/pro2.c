#include <stdio.h>
#include <math.h>
#include <string.h>

int is_pythagoras(int n, int *a, int *c, int *b)
{
    int conrrent = 0;
    int k = *c;
    int i;

    for (i = 1; i <= n; i++)
    {
        *b = i + 1;
        for (int j = *b; j < n; j++)
        {
            k = n - i - j;
            // printf("%d %d %d\n", i, j, k);
            conrrent = (long)pow(i, 2) + (long)pow(j, 2) == (long)pow(k, 2);

            if (conrrent)
            {
                *a = i;
                *b = j;
                *c = k;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n = 0;
    int a = 1, b, c;

    scanf("%d", &n);

    if (is_pythagoras(n, &a, &c, &b))
    {
        printf("(%d, %d, %d)\n", a, b, c);
    }
    else
    {
        printf("No triple found./");
    }

    return 0;
}

/*
30 -> (1, 2, 27)
        2, 3, 25
        3, 4, 23
        5, 6, 19
*/