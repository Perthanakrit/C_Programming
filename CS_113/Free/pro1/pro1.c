#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 4, b = 3, c, d, e;
    float f = 2, g = 5, h, i, j, k;

    c = f / b * f;
    printf("%c\n", c);
    h = a++ / (float)b; /* h = ? */
    printf("%f\n", h);
    j = (float)c / h--;        /* j = ? */
    d = b * h / c;             /* d = ? */
    i = d * f + h--;           /* i = ? */
    e = a * d++ / i;           /* e = ? */
    k = (int)i * d / (float)a; /* k = ? */

    // printf("h = %f\n", h);

    // printf("%d\n", 4 / 3);
    return 0;
}
