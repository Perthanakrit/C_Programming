// Pointer
#include <stdio.h>

int addTen(int x)
{
    x += 10;
    return x;
}

void addTwenty(int *x)
{
    *x += 20;
}

int main()
{
    int a = 100;
    int *ptr; // int *ptr = &a;
    ptr = &a;

    printf("a = %d, ref = %p\n", a, &a);
    printf("a = %p, ref = %p\n", ptr, &ptr);
    printf("deference ptr = %d\n", *ptr);

    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("data = %d, ref = %p\n", data[0], &data[0]);
    printf("data = %p\n", data); // printf("data = %p", data + 1 (4 bytes));

    // int *arrPtr = data;
    a += 2;

    printf("a = %d, ptr = %d (%p)\n", a, *ptr, ptr);
    addTwenty(&a);
    printf("a (after +20) = %d\n", a);

    return 0;
}