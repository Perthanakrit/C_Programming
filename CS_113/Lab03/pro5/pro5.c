#include <stdio.h>
#include <stdlib.h>

int main()
{
    char numIn[10];
    int num = 0, i = 0, j;
    int initalF = 97, initalB = 0;
    fgets(numIn, 10, stdin);
    num = atoi(numIn);

    if (num <= 1 || num > 26)
    {
        printf("-");
        return 0;
    }

    initalB = initalF + (num - 1);
    for (; i < num - 1; i++)
    {
        printf("%c-", initalB - i);
    }
    printf("%c", 'a');
    for (j = 1; j < num; j++)
    {
        printf("-%c", initalF + j);
    }

    return 0;
}
