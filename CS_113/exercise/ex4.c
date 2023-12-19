#include <stdio.h>
int main()
{
    int i = 1;

    while (i <= 12)
    {
        printf("%d,%2d\n", i, i * 12);
        i++;
    }

    return 0;
}
