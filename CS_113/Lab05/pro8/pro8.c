#include <stdio.h>

void climbing_up(int step, char ladder[][26], int n)
{
    int i, j;
    int moved = 0;
    int next_floor, new_pos;

    for (i = 0; i < n; i++)
    {
        if (!moved && step != 0)
        {
            next_floor = i + step;

            if (ladder[next_floor][2] == '0')
            {
                new_pos = next_floor - step;
                ladder[new_pos][2] = '0';
                ladder[new_pos + 1][2] = '^';

                moved = 1;
            }
        }
        else if (moved && i > new_pos + 1)
        {
            ladder[i][2] = '-';
        }

        printf("%s\n", ladder[i]);
    }
}

void climbing_down(int step, char ladder[][26], int n)
{
    int i, j;
    int moved = 0;
    int next_floor, new_pos;

    for (i = 0; i < n; i++)
    {
        new_pos = i + step;
        if (!moved && ladder[i][2] == '^' && new_pos < n)
        {
            ladder[new_pos - 1][2] = '0';
            ladder[new_pos][2] = '^';
            ladder[i][2] = '-';
            moved = 1;
        }

        if (!moved && new_pos < n)
        {
            ladder[i][2] = '-';
        }

        printf("%s\n", ladder[i]);
    }
}

int main()
{
    int num_of_stairs = 0;
    printf("Input number of stairs: ");
    scanf("%d", &num_of_stairs);

    char arC[6] = "|---|";
    int step = 0, round = 1;
    char ladder[num_of_stairs][26];

    if (num_of_stairs < 2)
    {
        return 0;
    }

    for (int i = 0; i < num_of_stairs; i++)
    {
        for (int j = 0; j < sizeof(arC); j++)
        {
            if (i == num_of_stairs - 1 && j == 2)
                ladder[i][j] = '^';
            else if (i == num_of_stairs - 2 && j == 2)
                ladder[i][j] = '0';
            else
                ladder[i][j] = arC[j];
        }
    }

    // main
    while (1)
    {
        printf("---- round %d ----\n", round);
        if (step >= 0)
        {
            climbing_up(step, ladder, num_of_stairs);
        }
        else
        {
            climbing_down(-step, ladder, num_of_stairs);
        }

        printf("Input number of stairs: ");
        scanf("%d", &step);
        if (step == 0)
            break;
        round++;
    }

    return 0;
}
