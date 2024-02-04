#include <stdio.h>

typedef struct
{
    double m, b;
} Record;

int main(int argc, char const *argv[])
{
    Record data;
    FILE *fp = fopen("./assests/data_source_2.dat", "rb"); // Open for reading in binary mode

    double x = 1, y;

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (fread(&data, sizeof(data), 1, fp))
    {
        y = data.m * x + data.b;
        x = y;
    }

    printf("y = %.4f\n", y);

    return 0;
}
