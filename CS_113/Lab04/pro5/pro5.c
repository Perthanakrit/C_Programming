#include <stdio.h>
#include <stdlib.h>
/*
4*(N-1) + 1
------d------ : 0 ->       100
----d-c-d---- : 1 ->    101-1 99-0  99-(-1):
--d-c-b-c-d-- : 2 -> 102 99 98 99 100
d-c-b-a-b-c-d: (103-3) (101-2) (99-1) (97-0=97) (99+(-1)) (99+) 100
--d-c-b-c-d-- :
----d-c-d----
------d------
*/

void printStars(int start_char, int size, int n)
{
    int middle = (size / 2);
    int print_dash = middle - (2 * n);
    int counter_char = n;
    start_char += n;

    for (int i = 0; i < size; i++)
    {
        if (print_dash == i && print_dash <= middle + 2 * n)
        {
            printf("%c", start_char - counter_char);
            print_dash += 2;
            if (i < middle)
            {
                start_char -= 2;
            }
            counter_char--;
        }
        else
        {
            printf("-");
        }
    }
    printf("\n");
}

int main()
{
    char size_input[10];
    int size = 0, i = 0, total_width;
    int char_a = 97;
    int start_char;

    fgets(size_input, 10, stdin);
    size = atoi(size_input);
    start_char = char_a + (size - 1);
    total_width = 4 * (size - 1) + 1;

    if (size < 1 || size > 26)
    {
        printf("-\n");
        return 0;
    }

    // 1-half
    for (i = 0; i < size; i++)
    {
        printStars(start_char, total_width, i);
    }
    // half+1 - n
    for (i = size - 2; i >= 0; i--)
    {
        printStars(start_char, total_width, i);
    }

    return 0;
}