#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *createString(int n)
{
    char *str = (char *)malloc((n + 1) * sizeof(char)); // +1 for null character

    for (int i = 0; i < n; i++)
    {
        str[i] = 'A' + i;
    }
    str[n] = '\0';

    return str;
}

int main()
{
    char *str = createString(5);

    printf("%s\n", str);

    return 0;
}