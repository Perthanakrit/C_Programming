#include <stdio.h>

int main()
{
    char character[10]; // char เก็บในแบบ ASCII int 1 byte (-128 to 127)
    int i;

    character[0] = 'A';
    character[1] = 'B';
    character[2] = 'C';
    character[3] = 'D';

    for (int i = 0; i < 4; i++)
    {
        printf("Character %d is %c\n", i, (char)character[i]);
    }

    return 0;
}