#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int m, int n)
{
    int **matrix = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++)
    {
        // allocate memory for each row
        matrix[i] = (int *)malloc(sizeof(int) * n);

        // assign each element by matrix[i][j]
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = i + j;
        }
    }
    return matrix;
}

void printMatrix(int **matrix, int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    const int M = 3, N = 4;
    int **matrix = createMatrix(M, N);

    printMatrix(matrix, M, N);
    return 0;
}