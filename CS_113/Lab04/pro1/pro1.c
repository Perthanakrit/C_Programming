#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char numInput[10];
    int num = 0, i = 0;

    fgets(numInput, 10, stdin);
    num = atoi(numInput);
    printf("%d\n", num);
    // 7 : 00000111 // 00001110
    for (int j = 1 << 7; j > 0; j /= 2)
    {
        printf("%d", j);
    }

    return 0;
}
