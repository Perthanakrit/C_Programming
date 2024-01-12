#include <stdio.h>

#define arC "|---|"
#define arC_head "|-O-|"
#define arC_tail "|-^-|"

void print_ladder(char *ladder[10], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", ladder[i]);
    }
}

void new_climbing_up(int step, char *ladder[10], int n)
{
    int i, j;
    int moved = 0;
    int next_floor, new_pos;

    for (i = n - 1, j = 0; i >= 0; i--, j++)
    {
        if (step != 0)
        {
            if (ladder[i][2] == arC_tail[2] && !moved)
            {
                new_pos = i - step;
                if (new_pos <= 0)
                {
                    new_pos = 1;
                }
                // printf("new_pos-%d", new_pos);
                // ladder[i] = arC;
                ladder[new_pos] = arC_tail;
                ladder[new_pos - 1] = arC_head;
                moved = 1;
            }

            if (i > new_pos)
            {
                ladder[i] = arC;
            }
        }

        // printf("%s\n", ladder[j]);
    }

    // print_ladder(ladder, n);
}

void new_climbing_down(int step, char *ladder[10], int n)
{
    int i, j;
    int moved = 0;
    int next_floor, new_pos;

    for (i = 0; i < n; i++)
    {
        if (step != 0)
        {
            if (ladder[i][2] == arC_head[2] && !moved)
            {
                new_pos = i + step;
                if (new_pos >= n - 1)
                {
                    new_pos = n - 2;
                }

                ladder[new_pos] = arC_head;
                ladder[new_pos + 1] = arC_tail;
                moved = 1;
            }

            if (i < new_pos)
            {
                ladder[i] = arC;
            }
        }

        // printf("%s\n", ladder[i]);
    }

    // print_ladder(ladder, n);
}

int main()
{
    int num_of_stairs = 0;
    printf("Input number of stairs: ");
    scanf("%d", &num_of_stairs);

    int step = 0, round = 1;
    char *ladder[100];

    if (num_of_stairs < 2)
    {
        return 0;
    }

    for (int i = 0; i < num_of_stairs; i++)
    {

        if (i == num_of_stairs - 2)
            *(ladder + i) = "|-O-|";
        else if (i == num_of_stairs - 1)
            *(ladder + i) = "|-^-|";
        else
            *(ladder + i) = arC;
    }

    // main
    while (1)
    {
        printf("---- round %d ----\n", round);
        print_ladder(ladder, num_of_stairs);
        printf("Input step command: ");
        scanf("%d", &step);
        if (step == 0)
            break;

        if (step > 0)
        {
            new_climbing_up(step, ladder, num_of_stairs);
        }
        else
        {
            new_climbing_down(-step, ladder, num_of_stairs);
        }
        round++;
    }

    return 0;
}
