#include <stdio.h>
#include <stdlib.h>

int main()
{
    char numIn[10];
    int num;

    fgets(numIn, 10, stdin);
    num = atoi(numIn);

    for (; num >= 0; num--)
    {
        printf("%d\n", num);
    }
    return 0;
}
