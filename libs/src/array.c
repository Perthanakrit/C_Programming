#include <stdio.h>

void removeArr(int *array, int size, int killedPrisoner)
{
    int i;
    int deleted = 0;

    for (i = 0; i < size; i++)
    {
        if (*(array + i) == killedPrisoner)
        {
            deleted = 1;
        }

        if (deleted)
        {
            if (i == size - 1)
            {
                *(array + i) = 0;
            }
            else
            {
                *(array + i) = *(array + i + 1);
            }
        }
    }
}