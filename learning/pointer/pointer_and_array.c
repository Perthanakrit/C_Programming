// Basically, &x[i] is equivalent to x+i and x[i] is equivalent to *(x+i).

#include <stdio.h>

int main()
{
    int x[5] = {2, 4, 3, 7, 5};
    int *ptr;

    ptr = &x[2];

    printf("*ptr = %d \n", *ptr);
    printf("*(ptr+1) = %d \n", *(ptr + 1));
    printf("*(ptr-1) = %d\n", *(ptr - 1));

    return 0;
}

void printArray()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    //  int n;
    //  printf("Index: ");
    //  scanf("%d", &n);

    // printf("arr[%d]: %d\n", n, &arr[0]);

    //-----
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%c", arrChar + i);
    //     printf("arrChar[%d]: %c\n", i, *(arrChar));
    // }
}
