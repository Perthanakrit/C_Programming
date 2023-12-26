#include <stdio.h>
#include <stdlib.h>

void print_ch(int max, char ch, int is_middle)
{
    int j;
    for (j = 0; j < max; j++)
    {
        if (is_middle && (j != 0 && j != max - 1))
        {
            printf("%c", 32);
        }
        else
        {
            printf("%c", ch);
        }
    }
}

void print_ch_between_sp(int max)
{
}

int main()
{
    int w = 0, h = 0;
    char w_input[10], h_input[10];

    fgets(w_input, 10, stdin);
    w = atoi(w_input);
    fgets(h_input, 10, stdin);
    h = atoi(h_input);

    if (w < 4 || h < 4)
        return 0;

    int i;
    for (i = 0; i < h; i++)
    {
        int is_between = i != 0 && i != h - 1 ? 1 : 0;

        print_ch(i, ' ', 0);
        print_ch(w, '*', is_between);
        printf("\n");
    }

    return 0;
}
