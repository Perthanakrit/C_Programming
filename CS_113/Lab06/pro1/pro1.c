#include <stdio.h>

/*
    09:45 pm -> 24-hour time is 9 + 12 : 45 = 21:45
*/

int main()
{
    int hour, minute;
    char unit[4];
    int is_midnight = 0;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %s", &hour, &minute, unit);

    // is_midnight = (hour == 12 && minute == 0 && (unit[0] == 'a' || unit[0] == 'A'));

    if ((unit[0] == 'p' || unit[0] == 'P') && hour != 12)
        hour += 12;
    else if (hour == 12 && (unit[0] == 'a' || unit[0] == 'A'))
        hour -= 12;

    printf("Equivalent 24-hour time: %02d:%02d\n", hour, minute);

    return 0;
}
