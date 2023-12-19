#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cI[4];
    char c;

    fgets(cI, 3, stdin);
    c = cI[0];

    if (c >= 'a' && c <= 'z')
    {
        printf("Output: lower case\n");
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("Output: upper case\n");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("Output: digit\n");
    }
    else
    {
        printf("Output: others\n");
    }

    return 0;
}
