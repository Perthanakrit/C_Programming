#include <stdio.h>

int main()
{
    FILE *fp;
    int num1, num2, num3;
    fp = fopen("input.txt", "r"); // r = read, w = write, a = append

    if (fp == NULL)
    {
        return 0;
    }

    for (int i = 0; i < 6; i++)
    {
        fscanf(fp, "%d %d %d", &num1, &num2, &num3);
        /* code */
        printf("%d %d %d\n", num1, num2, num3);
    }

    return 0;
}