#include <stdio.h>
#include <stdlib.h>

void foo(void *input)
{
    unsigned int *arr;

    arr = input; // cast void pointer to unsigned int pointer
    printf("%x %x\n", *arr, *(arr + 1));
    printf("%x %x\n", arr[0], arr[1]);
}

int main()
{
    char **str;                                           // ["dad", "09i", ";cls"]
    unsigned char buf[] = {0, 0, 0, 0xff, 0xff, 0, 0, 0}; // sizeof(buf) = 4

    str = (char **)malloc(3 * sizeof(char *));

    str[0] = "dad";
    str[1] = "09i";
    str[2] = ";cls";

    printf("%d\n", buf[3]);
    foo(buf);
    // puts("Hello world!");
    // puts("GJ");
    return 0;
}
