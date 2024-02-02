#include <stdio.h>
#include <stdlib.h>

char *find_last_chain(char **arr_str, int size)
{
    int i, j, unmatched = 0;

    for (i = 1; i < size; i++)
    {
        unmatched = 0;
        for (j = 0; arr_str[i][j] != '\0'; j++)
        {
            if (arr_str[i][j] != arr_str[i - 1][j])
            {
                unmatched++;
            }
        }
        if (unmatched > 2)
        {
            return arr_str[i - 1];
        }
    }

    return arr_str[size - 1];
}

int main(int argc, char const *argv[])
{
    int str_len = 0, size, i;

    char **arr_str = (char **)malloc(sizeof(char *) * size);

    scanf("%d", &str_len);
    scanf("%d", &size);

    if (str_len < 3 || size <= 1)
    {
        return 0;
    }

    for (i = 0; i < size; i++)
    {
        arr_str[i] = (char *)malloc(sizeof(char) * str_len);
        scanf("%s", arr_str[i]);
    }

    printf("%s", find_last_chain(arr_str, size));

    return 0;
}
