#include <stdio.h>
#include <unistd.h>

#define START_NUMBER 5

int main()
{
    int number = START_NUMBER;
    printf("number = %d\n", number);
    number = 10;
    printf("number = %d\n", number);
    return 0;
}
