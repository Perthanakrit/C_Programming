#include <stdio.h>
#include <stdlib.h>

int main()
{
    char numInput[10], money_input[10], str_day[6];
    float goal_amount = 0, money_today = 0, current_amount = 0;
    int day = 0;

    printf("Enter your goal amount: ");
    fgets(numInput, 10, stdin);
    goal_amount = atof(numInput);

    while (1)
    {
        printf("Enter money collected today: ");
        fgets(money_input, 10, stdin);
        money_today = atof(money_input);

        current_amount += money_today;
        day++;

        if (current_amount >= goal_amount)
        {
            break;
        }
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, current_amount, goal_amount - current_amount);
    }

    printf("Congratulations! You take %d %s to reach your goal.\n", day, day > 1 ? "days" : "day");

    return 0;
}