#include <stdio.h>

int main()
{
    // int test[2][3][2];
    int count = 0;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                count += 1;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
