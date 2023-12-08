#include <stdio.h>

int main()
{
    int computer_time = 785; // min

    int day, hours, minutes;

    day = computer_time / 60 / 24;
    computer_time -= day * 60 * 24;
    hours = computer_time / 60;
    minutes = computer_time % 60;

    printf("It is %d days %d hours and %d minutes.", day, hours, minutes);

    return 0;
}