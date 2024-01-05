#include <stdio.h>

/*

*/

int numRollsToTarget(int n, int k, int target)
{

    // Base cases
    if (n == 0 && target == 0)
        return 1;
    if (n == 0 || target <= 0)
        return 0;

    int count = 0;
    for (int i = 1; i <= k; i++)
    {
        ;
    }
    return count;
}

int main()
{
    int result = numRollsToTarget(30, 30, 500);
    printf("Number of rolls to reach target: %d\n", result);

    return 0;
}
