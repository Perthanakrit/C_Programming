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

    for (i = 0; i < numPrisoners; i++)
    {
        printf("%d ", prisoners[i]);
    }
    puts("");

    int *killerPtr = &prisoners[0];

    // printf("@@ &prisoners[0] %p\n", &prisoners[0]);
    // printf("@@ &prisoners[%d] %p\n", numPrisoners - 1, &prisoners[numPrisoners - 1]);

    // Select prisoner to be killed
    for (i = 0; i < numPrisoners; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (*killerPtr == 0)
                killerPtr = &prisoners[0];
            if (j != m)
                killerPtr++;
        }
        // append number of prisoner who is killed to array `killed`
        killed[i] = *killerPtr;
        // remove number killed prisoner from array `prisoners`
        removeKilled(&prisoners[0], numPrisoners, *killerPtr);
        // numPrisoners--;
    }

    for (i = 0; i < numPrisoners; i++)
    {
        printf("%d ", killed[i]);
    }
    return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
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