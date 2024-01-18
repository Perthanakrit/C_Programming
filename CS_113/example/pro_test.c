#include <stdio.h>
#include <stdlib.h>

int even_odd(char *str);

int main(int argc, char const *argv[])
{
    char *str = "85613";
    // char num[2] = {str[0], '\0'};

    printf("%d\n", even_odd(str));
    return 0;
}

int sumEven(char *num_str, int n)
{
    int sum = 0;
    int num = 0;

    char new_str[2] = {num_str[n], '\0'};

    if (num_str[n] == '\0')
    {
        return 0;
    }

    num = atoi(new_str);
    if (num % 2 == 0)
    {
        sum = (num % 10) + sumEven(num_str, n + 1);
    }
    else
    {
        sum = sumEven(num_str, n + 1);
    }

    return sum;
}

int sumOdd(char *num_str, int n)
{
    int sum = 0;
    int num = 0;

    char new_str[2] = {num_str[n], '\0'};

    if (num_str[n] == '\0')
    {
        return 0;
    }

    num = atoi(new_str);
    if (num % 2 != 0)
    {
        sum = (num % 10) + sumOdd(num_str, n + 1);
    }
    else
    {
        sum = sumOdd(num_str, n + 1);
    }

    return sum;
}

int even_odd(char *num_str)
{
    // int sumEven = 0, sumOdd = 0;
    int num = 0;
    char new_str[2] = {*num_str, '\0'};

    // printf("%d \n", sumEven(num_str));
    return sumEven(num_str, 0) - sumOdd(num_str, 0);
}
