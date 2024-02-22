#include <stdio.h>

void stringcat(char src[], char dest[])
{
    int i = 0, j = 0;

    while (dest[i] != '\n' && dest[i] != '\0')
    {
        i++;
    }

    for (; src[j] != '\n' && src[j] != '\0'; j++)
    {
        dest[i + j] = src[j];
    }
    dest[i + j] = '\0';
}

int main()
{
    char in1[100], in2[100];

    printf("Input 1: ");
    fgets(in1, 100, stdin); /* read a line of characters from the input to "in1" variable */
    printf("Input 2: ");
    fgets(in2, 100, stdin); /* read another line of characters from the input to "in2" variable */
    stringcat(in1, in2);
    printf(" Output: ");
    printf("%s\n", in2);
    return 0;
}
