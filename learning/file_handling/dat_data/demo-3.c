#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double m, b;
    int id;
} Record;

void bubbleSort(Record *arr, int n)
{
    int i, j;
    Record temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j].id > arr[j + 1].id)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    Record data;
    FILE *fp = fopen("./assets/data_source_3.dat", "rb"); // Open for reading in binary mode

    double x = 1, y;
    int count = 0;
    Record *records = (Record *)malloc(sizeof(Record) * 400);
    Record temp;

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (fread(&data, sizeof(data), 1, fp))
    {
        records[count] = data;
        if (count >= 1)
        {
            bubbleSort(records, count + 1);
        }
        count++;
    }

    fclose(fp);

    for (int i = 0; i < count; i++)
    {
        y = records[i].m * x + records[i].b;
        x = y;
    }

    printf("y = %.4f\n", y);

    return 0;
}
