#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[100];
    int i, numof_vowels = 0;

    printf("String (without a space): ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        int is_vowel = str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                       str[i] == 'o' || str[i] == 'u' ||
                       str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                       str[i] == 'O' || str[i] == 'U';

        if (is_vowel)
        {
            printf("%c ", str[i]);
            numof_vowels++;
        }
    }
    printf("\nThis string contains %d %s.\n", numof_vowels, numof_vowels > 1 ? "vowels" : "vowel");

    return 0;
}
