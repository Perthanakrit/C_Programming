#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file;
    double m, b;
    double x = 1, y;

    file = fopen("./assets/data_source_1.dat.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(file, "%lf %lf", &m, &b) != EOF)
    {
        y = m * x + b;
        x = y;
    }
    printf("y = %.4lf\n", y);
    return 0;
}
