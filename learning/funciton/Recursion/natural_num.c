#include <stdio.h>

int main()
{
    int addNumber(int n);

    printf("%d\n", addNumber(10));

    return 0;
}

int addNumber(int n)
{

    if (n > 0)
    {
        return n + addNumber(n - 1);
    }
    return n;
}
