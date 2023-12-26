#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char numInput[10];
    int num = 0, i = 0;

    fgets(numInput, 10, stdin);
    num = atoi(numInput);

    printf("Binary number of %d is ", num);
    for (i = 0; i < 4; i++)
    {
        int temp = (num & (int)pow(2, 3 - i)) >> (3 - i); //
        printf("%d", temp);
    }
    printf(".\n");

    return 0;
}
