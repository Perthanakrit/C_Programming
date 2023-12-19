#include <stdio.h>
int main()
{
    char s[100];
    int i;
    int length, j;
    char r[100] = "";

    for (i = 0; (s[i] = getchar()) != '\n'; i++)
        ;
    s[i] = 0;

    for (length = 0; s[length] != '\0'; length++)
        ;

    for (int j = length; j >= 0; j--)
    {
        printf("%c ", s[length - j]);
        r[j] = s[length - j];
    }
    r[length + 1] = 0;

    printf("[%s]\n", r);

    return 0;
}