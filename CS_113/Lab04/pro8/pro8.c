#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bi_to_dec(int num, int n)
{
    int mod_result = num % 2;
    if (num == 0)
    {
        return num;
    }
    return mod_result * pow(10, n) + bi_to_dec(num / 2, n + 1);
}

void bi_to_dec2(int num)
{
    if (num > 1)
        bi_to_dec2(num / 2);
    printf("%d", num % 2);
}

int main()
{
    char numInput[8];
    int num = 0;
    fgets(numInput, 8, stdin);
    num = atoi(numInput);

    if (num <= 1)
    {
        printf("%d\n", num);
        return 0;
    }

    printf("%d\n", bi_to_dec(num, 0));

    // bi_to_dec2(num);

    return 0;
}