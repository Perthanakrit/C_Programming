#include <stdio.h>
/*
n = 4

0
1
2
3
2
1
0

*/

void print_x(int r)
{
    int i;
    for (i = 0; i < r; i++)
    {
        i % 2 != 0 ? printf("x") : printf("-");
    }
    printf("\n");
}

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        print_x(i);
    }

    for (; i > 0; i--)
    {
        print_x(i);
    }

    return 0;
}
