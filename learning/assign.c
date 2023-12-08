#include <stdio.h>

int main()
{
    int x, z;
    x = z = 2;

    printf("%d\n", x || z);
    printf("%d\n", x | z);
    printf("%d\n", x |= z);

    return 0;
}