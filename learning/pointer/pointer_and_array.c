// Basically, &x[i] is equivalent to x+i and x[i] is equivalent to *(x+i).

#include <stdio.h>

int main()
{
    int x[5] = {2, 4, 3, 7, 5};
    int *ptr;
    int *ptr_2;

    ptr = x;
    ptr_2 = &x[2];

    printf("*ptr = %d \n", *ptr);
    printf("*(ptr+1) = %d \n", *(ptr + 1));
    ptr++;
    printf("*(ptr-1) = %d\n", *(ptr - 1));

    return 0;
}
