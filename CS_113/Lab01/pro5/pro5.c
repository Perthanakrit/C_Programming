#include <stdio.h>

int main()
{
    int amount = 50;
    int fifty = amount / 50;
    amount -= fifty * 50;
    int twenty = amount / 20;

    amount -= twenty * 20;

    int five = amount / 5;

    amount -= five * 5;

    int one = amount;

    printf("1: %d\n5: %d\n20: %d\n50: %d\n", one, five, twenty, fifty);

    return 0;
}