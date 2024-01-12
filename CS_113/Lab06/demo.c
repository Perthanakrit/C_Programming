#include <stdio.h>

void filter_arr(int *array, int size, int target)
{
    int i, j = 0;
    int deleted = 0;
    int new_size = size - 1;
    int new_arr[new_size];

    for (i = 0; i < size; i++, array++)
    {
        if (*array == target)
        {
            deleted = 1;
        }
        else
        {
            new_arr[j] = *array;
            j++;
        }
    }
    array -= size;
    for (i = 0; i < new_size; i++, array++)
    {
        *array = new_arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    char s1[] = {'u', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'};
    // char s2[4] = {"university", "world"};
    int size = 10;
    char *s3[size];

    // printf("%s\n", s2[1]);

    // for (int i = 0; i < size; i++)
    // {
    //     char ch[] = {(char)(97 + i), (char)(98 + i), '\0'};
    //     *(s3 + i) = ch;
    // }
    int x = 23;
    printf("%d\n", -12 + x--);
    printf("%o\n", 012);

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%s - %p\n", *(s3 + i), s3 + i);
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%c - %p\n", **(s3 + i), *(s3 + i) + i);
    // }

    return 0;
}