#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    // int n1 = 0, n2 = 1;
    return (pow((1 + pow(5, 1.0 / 2.0)), n) - pow((1 - pow(5, 1.0 / 2.0)), n)) / (pow(2, n) * pow(5, 1.0 / 2.0));
}

int main()
{
    char inputN[7];
    int num;

    fgets(inputN, 7, stdin);
    num = atoll(inputN);

    for (int i = 0; i <= num; i++)
    {
        printf("F(%d) = %d\n", i, fibo(i));
    }

    return 0;
}
