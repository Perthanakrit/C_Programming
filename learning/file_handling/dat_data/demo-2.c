#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double m, b;
    int id;
} Record;

void bubbleSort(Record *arr, int n)
{
    int i, j, swap = 0;
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
                swap = 1;
            }
        }
        if (swap == 0)
        {
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    Record data;
    FILE *fp = fopen("./assets/data_source_4.dat", "rb"); // Open for reading in binary mode

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

    // write to file
    FILE *fp2 = fopen("./assets/data_source_5_sorted.txt", "w"); // Open for writing in binary mode
    for (int i = 0; i < count; i++)
    {
        //printf("id: %d, m: %.4f, b: %.4f\n", records[i].id, records[i].m, records[i].b);
        fprintf(fp2, "id: %d, m: %.4f, b: %.4f\n", records[i].id, records[i].m, records[i].b);
        y = records[i].m * x + records[i].b;
        x = y;
    }

    printf("y = %.4f\n", y);

    return 0;
}
