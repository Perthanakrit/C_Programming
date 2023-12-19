#include <stdio.h>
#include <stdlib.h>
int main()
{
    char stampInp[5], amountInp[22];
    int stamp = 0;
    float amount = 0.0f;
    int sale = 0;

    fgets(stampInp, 4, stdin);
    stamp = atoi(stampInp);

    fgets(amountInp, 20, stdin);
    amount = atof(amountInp);
    // printf("%d %.2f\n", stamp, amount);

    if (stamp >= 9)
    {
        sale = 40;
        amount -= (40.0f / 100.0f) * amount;
        stamp -= 9;
    }
    else if (stamp >= 6 && stamp <= 8)
    {
        sale = 30;
        amount -= (30.0f / 100.0f) * amount;
        stamp -= 6;
    }
    else if (stamp >= 3 && stamp <= 5)
    {
        sale = 20;
        amount -= (20.0f / 100.0f) * amount;
        stamp -= 3;
    }
    else if (stamp == 2)
    {
        sale = 15;
        amount -= (15.0f / 100.0f) * amount;
        stamp -= 2;
    }
    else if (stamp == 1)
    {
        sale = 10;
        amount -= (10.0f / 100.0f) * amount;
        stamp -= 1;
    }

    printf("You get %d percents discount.\n", sale);
    printf("Total amount due is %.2f Baht.\n", amount);
    printf("And you have %d stickers left.\n", stamp);

    return 0;
}