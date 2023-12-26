#include <stdio.h>
#include <stdlib.h>

/*
    n = 12, target = 1
    12 % 10 != 1
        -> count_target(1, 1)
        -> 1 % 10 == 1
            -> 1 + count_target(0, 1)
            -> 0 % 10 != 1
                -> count_target(0, 1) : return 0
*/
int count_target(int n, int target)
{
    int count = (n == 0 && target == 0) ? 1 : 0;

    while (n > 0)
    {
        if (n % 10 == target)
        {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main()
{
    int count = count_target(2342345, 1);

    if (count <= 0)
    {
        printf("There is no");
    }
    else if (count == 1)
    {
        printf("There is only 1");
    }
    else
    {
        printf("There are %d ", count);
    }

    return 0;
}
