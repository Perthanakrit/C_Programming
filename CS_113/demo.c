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
    char s2[] = "university";
    char *s3[10];

    printf("A");
    puts("B");
    putchar('C');
    puts("");

    // printf("%d\n", sizeof(s1) - sizeof(s2));

    // filter_arr(&arr[0], 5, 3);

    // filter_arr(&arr[0], 4, 1);

    // for (int i = 0; i < 3; i++)
    // {
    //     if (i == 1)
    //         continue;
    //     printf("%d ", arr[i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     *(s3 + i) = "uni";
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%s\n", *(s3 + i));
    // }

    switch ('V')
    {
    case 'V':
    {
        printf("V");
        break;
    }
    default:
    {
        printf("default");
        break;
    }
    }

    return 0;
}