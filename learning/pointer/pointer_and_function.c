#include <stdio.h>

void addOne(int *ptr)
{
    (*ptr)++; // adding 1 to *ptr
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int num1 = 5, num2 = 10;

    swap(&num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

// int main()
// {
//     int *p, i = 10;
//     p = &i;
//     addOne(p);

//     printf("%d\n", *p); // 11
//     printf("%d\n", i);
//     return 0;
// }