#include <stdio.h>

int main()
{
    int *p1;
    int *p2;
    int *p3, p4 = 1;
    int v = 6;

    *p1 = 5;
    p2 = &p4;

    printf("%d %d\n", *p1, *p2);
    p2 = &v;
    printf("%d %d %d\n", *p1, *p2, v);
    *p2 = 2;
    printf("%d %d %d\n", *p1, *p2, v);
    return 0;
}
