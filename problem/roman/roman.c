#include <stdio.h>

/*
    5 : 1 2 3 4 5 (I II III IV V)
    7 -> IIV : 1 + 1 + 5 = 7
*/

char *covert_to_roman(int num)
{
    char *roman = (char *)malloc(sizeof(char) * num);
    int i;
    int j = num - 2;

    for (i = 0; num > 0; i++)
    {
        if (num >= 100)
        {
            roman[j - i] = 'C';
            num -= 100;
        }
        else if (num >= 50)
        {
            roman[j - i] = 'L';
            num -= 50;
        }
        else if (num >= 10)
        {
            roman[j - i] = 'X';
            num -= 10;
        }
        else if (num >= 5)
        {
            roman[j - i] = 'V';
            num -= 5;
        }
        else if (num >= 1)
        {
            roman[j - i] = 'I';
            num -= 1;
        }
    }

    return roman;
}

int main()
{
    int n;

    printf("%s\n", covert_to_roman(5));

    return 0;
}