#include <stdio.h>
#include <math.h>
#include <string.h>

int is_pythagoras(int n, int a, int *c, int *b)
{
    int conrrent = 0;
    for (int j = *b; j < n; j++)
    {
        *c = n - j - a;
        if (c < 0)
            break;

        conrrent = (long)pow(a, 2) + (long)pow(j, 2) == (long)pow(*c, 2);
        if (conrrent)
        {
            *b = j;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n = 0, i = 1;
    int a = i, b, c;

    int is_running = 1;

    scanf("%d", &n);

    for (; a <= n; a++)
    {
        b = a + 1;
        if (is_pythagoras(n, a, &c, &b))
        {
            printf("(%d, %d, %d)\n", a, b, c);
        }
        else
        {
            printf("No triple found");
            break;
        }
    }

    return 0;
}

/*
30 -> (1, 2, 27)
        2, 3, 25
        3, 4, 23
        5, 6, 19
*/