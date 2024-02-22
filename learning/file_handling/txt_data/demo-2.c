#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *file;
    char line[1000];
    int total = 0;
    file = fopen("./assets/data.txt", "r");

    while (fgets(line, 1000, file) != NULL)
    {
        int data = atoi(line);
        total += data;
    }

    printf("%d\n", total);
    fclose(file);
    return 0;
}
