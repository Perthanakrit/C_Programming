#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character[10]; // char เก็บในแบบ ASCII int 1 byte (-128 to 127)
    int i;

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Character %d is %c\n", i, (char)character[i]);
    // }

    int num[10] = {1, 2, 3, 4};
    int *y;
    y = (int *)malloc(sizeof(num));
    // printf("%p\n", y);
    for (i = 0; i < 10; i++)
    {
        *(y + i) = num[i];
    }
    printf("%p\n", &y);
    free(y);
    for (int i = 0; i < 10; i++)
    {
        printf("num[%d] = %d - %p, y=%d (%p)\n", i, num[i], &num[i], *(y + i), y + i);
    }

    return 0;
}