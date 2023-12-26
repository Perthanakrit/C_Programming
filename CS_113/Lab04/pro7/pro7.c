#include <stdio.h>
#include <stdlib.h>

void printStars(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    char nInput[10];
    int n;
    int i = 1;

    fgets(nInput, 10, stdin);
    n = atoi(nInput);

    for (; i <= n; i++)
    {
        printStars(i);
    }

    for (i = n - 1; i > 0; i--)
    {
        printStars(i);
    }

    return 0;
}