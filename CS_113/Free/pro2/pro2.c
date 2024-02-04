#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5, b = 2;

    printf("%d", --a * b % 3 << 2);

    // a | b + 3;             /* Ans2 = ? */

    // (b << 1) * a;          /* Ans3 = ? */
    // a + (7 & b);           /* Ans4 = ? */
    // --a *b % 3 << 2;       /* Ans5 = ? */
    // (a + 5 * b >> 1) << 2; /* Ans6 = ? */

    return 0;
}
