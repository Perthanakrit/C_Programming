#include <stdio.h>

void print_data()
{
    printf("%d\n", 1);
}

int main()
{
    int *p1;
    int *p2;
    int *p3, p4 = 1;
    int v = 6;
    void (*f)();
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 19};
    f = print_data;
    p1 = arr;
    p2 = &p4;

    // printf("%d %d\n", *p1, *p2);
    // p2 = &v;
    // printf("%d %d %d\n", *p1, *p2, v);
    // *p2 = 2;
    // printf("%d %d %d\n", *p1, *p2, v);

    p1++;
    p1 += 3;
    printf("%d\n", *p1);

    return 0;
}
