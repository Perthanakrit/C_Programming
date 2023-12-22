#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_one[12];
    char input_two[12];

    long long num_one, num_two, n1, n2, lcm;

    fgets(input_one, 1000000000, stdin);
    num_one = atoll(input_one);
    fgets(input_two, 1000000000, stdin);
    num_two = atoll(input_two);

    // 4 2 -> 0
    if (num_one > num_two)
    {
        n1 = num_one;
        n2 = num_two;
    }
    else
    {
        n1 = num_two;
        n2 = num_one;
    }

    while (n1 % n2 != 0)
    {
        long long temp = n1 % n2; // 10 5
        n1 = n2;
        n2 = temp;
    }

    lcm = (num_two * num_one) / n2;

    printf("GCD: %lld\n", n2);
    printf("LCM: %lld\n", lcm);

    return 0;
}
