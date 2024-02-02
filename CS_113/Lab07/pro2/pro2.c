#include <stdio.h>

// Mai
int remove_vowel(char *str)
{
    int i;
    int is_vowel = 0;
    char *tmp = str;

    while (*str != '\0')
    {
        is_vowel = *str == 'a' || *str == 'e' || *str == 'i' ||
                   *str == 'o' || *str == 'u' ||
                   *str == 'A' || *str == 'E' || *str == 'I' ||
                   *str == 'O' || *str == 'U';

        if (is_vowel)
        {
            for (i = 0; *(str + i) != '\0'; i++)
            {
                *(str + i) = *(str + i + 1);
            }
            str--;
        }
        str++;
    }
    return 0;
}

int main()
{
    char str[80];

    printf(" Input: ");
    fgets(str, 80, stdin);

    remove_vowel(str);
    printf("Output: %s\n", str);

    return 0;
}