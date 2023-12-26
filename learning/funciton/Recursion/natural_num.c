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

/*
    addNumber(10)
        -> 10 + addNumber(9)
            -> 9 + addNumber(8)
                -> 8 + addNumber(7)
                    -> 7 + addNumber(6)
                        -> 6 + addNumber(5)
                            -> 5 + addNumber(4)
                                -> 4 + addNumber(3)
                                    -> 3 + addNumber(2)
                                        -> 2 + addNumber(1)
                                            -> 1 + addNumber(0)
                                                -> 0
                                            return 1+0
                                        return 2+1+0
                                    return 3+2+1+0
*/
