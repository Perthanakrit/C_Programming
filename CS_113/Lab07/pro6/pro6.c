#include <stdio.h>

int charcount(char *s)
{
    int count = 0;
    int i = 0;
    while (s[i] != '\n' && s[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void charweave(char *s, char *result)
{
    int i, j;
    int len = charcount(s);

    for (i = 0, j = 0; i < len; i++, j++)
    {
        result[j] = s[i];
        j++;
        result[j] = s[len - 1 - i];
    }
    result[j] = '\0';
}

int main()
{
    char str[100], result[200];

    printf("String: ");
    fgets(str, 100, stdin); /* read a line of characters from the input to "str" variable */
    charweave(str, result);
    printf("Output: %s\n", result);
    return 0;
}