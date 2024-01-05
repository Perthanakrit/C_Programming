#include <stdio.h>

int get_score()
{
    static int score = 0;
    score++;
    return score;
}
int i;
int main()
{
    printf("%d\n", i);
    return 0;
}

int bar(char buf[], int x, int a, int b)
{
    int c;

    if (a > b)
        return -1;
    c = (a + b) / 2;

    if (x == buf[c])
        return c;
    else
        return (x > buf[c]) ? bar(buf, x, a, c - 1) : bar(buf, x, c + 1, b);
}

// int main()
// {
//     char w[] = {96, 94, 91, 86, 81, 75, 72, 66, 60, 58, 46, 43, 39, 32, 27, 13};
//     printf("%d\n", bar(w, 46, 0, 15));
//     return 0;
// }