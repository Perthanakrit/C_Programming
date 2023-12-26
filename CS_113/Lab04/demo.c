#include <stdio.h>

int main()
{
    char numInput[10];
    int num = 0;
    fgets(numInput, 10, stdin);
    num = atoi(numInput);
    return 0;
}