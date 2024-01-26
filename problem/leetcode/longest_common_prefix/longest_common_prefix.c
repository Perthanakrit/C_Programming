#include <stdio.h>
#include <stdlib.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    char *result = (char *)malloc(sizeof(char) * 3);
    char *temp = "";
    int is_vowels = 0;

    for (int i = 0; i < strsSize; i++)
    {
        temp = *(strs + i);

        for (int j = 0; temp[j] != '\0'; j++)
        {
            is_vowels = (temp[j + 1] == 'a' || temp[j + 1] == 'e' || temp[j + 1] == 'i' || temp[j + 1] == 'o' || temp[j + 1] == 'u') ? 1 : 0;

            *result = temp[j];
            result++;

            if (is_vowels)
            {
                printf("%c\n", temp[j]);
                printf("%s\n", result);
                *result = '\0';
                break;
            }
        }
    }

    return result;
}

int main()
{
    char *strs[] = {"flower", "flow", "flight"};
    int strsSize = 3;

    char *result = longestCommonPrefix(strs, strsSize);

    printf("%s\n", result);

    return 0;
}