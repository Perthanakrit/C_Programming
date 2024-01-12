#include <stdio.h>
#include <stdlib.h>

int *crateArray(int n)
{
    int i;
    int *arr = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    return arr;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }
}

int main()
{
    float *x_ptr = (float *)malloc(sizeof(float)); // allocate memory for a float
    // *x_ptr = 5.3;

    // printf("x_ptr = %p\n", x_ptr);
    // printf("&x_ptr = %p\n\n", &x_ptr);
    // printf("*x_ptr = %f\n\n", *x_ptr);

    // const int N = 5;
    // int *arr = crateArray(N);

    // printArray(arr, N);

    return 0;
}