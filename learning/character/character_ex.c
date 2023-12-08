#include <stdio.h>

int main()
{
    int ch;

    printf("Enter a character: ");
    // fflush(stdout);
    ch = getchar();
    printf("%c\n", ch);
    return 0;
}
