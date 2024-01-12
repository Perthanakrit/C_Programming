#include <stdio.h>

void foo(void *input)
{
    unsigned int *arr;

    arr = input; // cast void pointer to unsigned int pointer
    printf("%x %x\n", *arr, *(arr + 1));
    printf("%x %x\n", arr[0], arr[1]);
}

int main()
{
    unsigned char buf[] = {0, 0, 0, 0xff, 0xff, 0, 0, 0}; // sizeof(buf) = 4
    printf("%d\n", buf[3]);
    foo(buf);
    // puts("Hello world!");
    // puts("GJ");
    return 0;
}
