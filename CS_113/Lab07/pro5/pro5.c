#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char str[100])
{
    char *new_str = (char *)malloc(sizeof(char) * 100);
    int is_lower = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
            new_str[i] = toupper(str[i]);
        else
            new_str[i] = str[i];
    }

    return new_str;
}

int main()
{
    char s[100];
    char *result;

    scanf("%s", s);
    result = stoupper(s);
    if (result == s)
        printf("ERROR.\n");
    printf("%s\n", result);
}