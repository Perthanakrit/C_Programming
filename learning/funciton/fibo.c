#include <stdio.h>

extern number = 5;

int getstring(char buf[], int size)
{
    int i;
    for (i = 0; i < size - 1 && (buf[i] = getchar()) != EOF; i++)
        ;
    buf[i] = 0;
    return i;
}

putsstring(const char buf[])
{
    int i;
    i = 0;
    while (buf[i] != 0)
    {
        putchar(buf[i++]);
    }
}

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 5;
    // printf("%d\n", fib(5));
    char buffer[1024];
    int size = sizeof(buffer);

    getstring(buffer, size);
    putsstring(buffer);
    return 0;
}

/*
    n = 5
    fib(n - 1) + fib(n - 2);
    n, fib(n - 1), fib(n - 2), fib(n - 1) + fib(n - 2)
    5, fib(4), fib(3)

*/
