#include <stdio.h>
#include <stdlib.h>

void malloc_ptr()
{
    int *p;

    p = (int *)malloc(sizeof(400));
}

void array_ptr()
{
    char x[] = {2, 8, 10, 9, 5, 7, -1, 6, 3, 4, 1};
    char *p;

    for (p = x; *p != -1; p = x + *p)
        printf("%d ", *p);
}

int main()
{
    int d[] = {1, 2, 3, 4};
    int *p;
    p = d;

    printf("%ld : \n", ++p - d);

    for (p = d; *p != 6;)
    {
        *p = *p * 2;
        p = d + (++p - d) % 4;
        printf("%d\n", *p);
    }

    printf("%d %d %d %d\n", d[0], d[1], d[2], d[3]);

    return 0;
}
