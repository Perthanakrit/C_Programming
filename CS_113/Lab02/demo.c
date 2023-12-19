#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20]; // เผื่อ size +2

    // gets(str); don't use

    // fgets(str, 20, stdin); // fgets(ref, size, input) * 1
    // printf("[%s]\n", str);

    // int i = atoi(str); * 2
    //  printf()

    // char c = getchar(); * 3
    // printf("%c\n", c);
    int b = 3;
    printf("%d", 2 * b);
    return 0;
}
