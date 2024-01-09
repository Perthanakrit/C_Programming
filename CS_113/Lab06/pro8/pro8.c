#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
    int numPrisoners, m, i;

    scanf("%d", &numPrisoners);
    scanf("%d", &m);

    int prisoners[numPrisoners];
    int killed[numPrisoners];

    // generate array 1 to numPrisoners
    for (i = 0; i < numPrisoners; i++)
    {
        prisoners[i] = i + 1;
    }

    int *killerPtr = &prisoners[0];

    // printf("@@ &prisoners[0] %p\n", &prisoners[0]);
    // printf("@@ &prisoners[%d] %p\n", numPrisoners - 1, &prisoners[numPrisoners - 1]);

    // Select prisoner to be killed
    for (i = 0; i < numPrisoners; i++)
    {
        killerPtr = &prisoners[0];
        for (int j = 1; j <= numPrisoners; j++, killerPtr++)
        {
            if (j == m)
            {
                // append number of prisoner who is killed to array `killed`
                killed[i] = *killerPtr;
                // remove number killed prisoner from array `prisoners`
                removeKilled(&prisoners[0], numPrisoners, *killerPtr);
                break;
            }
        }
    }

    for (i = 0; i < numPrisoners; i++)
    {
        printf("%d ", killed[i]);
    }
    return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    int i, j = 0;
    int deleted = 0;
    int new_size = size - 1;
    int new_arr[new_size];

    for (i = 0; i < size; i++, array++)
    {
        if (*array == killedPrisoner)
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