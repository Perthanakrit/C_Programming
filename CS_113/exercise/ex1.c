#include <stdio.h>

int main()
{
    int i, j;
    char s[12] = "hello world";
    int lower, upper, step;
    const int stepA = 20;
    char c = 'A' + 1;
    int lowerA = 10, uppeAr = 30;

    for (i = j = 0; i < 11; i++)
    {
        if (s[i] != s[j] && s[i] != ' ')
            s[j++] = s[i] - 'a' + 'A';
    }
    puts(s);

    return 0;
}
