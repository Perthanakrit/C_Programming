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
    printf("data = %p", data); // printf("data = %p", data + 1 (4 bytes));

    // int *arrPtr = data;

    addTwenty(&a);
    printf("a = %d\n", a);

    return 0;
}