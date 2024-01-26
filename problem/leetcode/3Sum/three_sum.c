#include <stdio.h>
// #include "array.h"

#define MAX_SIZE 6

void left_value(int *array, int size, int value)
{
}

int main()
{
    int ex_arr[MAX_SIZE] = {-1, 0, 1, 2, -1, -4};
    int i, j, k, remain_value, is_ordered = 1;
    int r;

    for (i = 0, r = 0; i < MAX_SIZE; i++)
    {
        for (j = i + 1; j < MAX_SIZE; j++)
        {
            is_ordered = ex_arr[j] >= ex_arr[i] ? 1 : 0;
            // if (!is_ordered)
            //     continue;

            remain_value = 0 - ex_arr[i] - ex_arr[j];
            for (k = j + 1; k < MAX_SIZE; k++)
            {
                is_ordered = (ex_arr[k] >= ex_arr[j] && ex_arr[k] >= ex_arr[i]) ? 1 : 0;
                // if (!is_ordered)
                //     continue;
                if (ex_arr[k] == remain_value)
                {
                    printf("%d %d %d\n", ex_arr[i], ex_arr[j], ex_arr[k]);
                }
            }
        }
    }

    return 0;
}