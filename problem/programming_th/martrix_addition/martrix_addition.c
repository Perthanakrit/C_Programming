#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int col, int row)
{
    int **matrix;
    matrix = (int **)malloc(sizeof(int *) * col);

    for (int i = 0; i < col; i++)
    {
        *(matrix + i) = (int *)malloc(sizeof(int) * row);
        for (int j = 0; j < row; j++)
        {
            scanf("%d", *(matrix + i) + j);
        }
    }

    return matrix;
}

int **add_matrix(int **matrix1, int **matrix2, int col, int row)
{
    int **result = (int **)malloc(col * sizeof(int *));

    for (int i = 0; i < col; i++)
    {
        *(result + i) = (int *)malloc(row * sizeof(int));
        for (int j = 0; j < row; j++)
        {
            *(*(result + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }

    return result;
}

int main()
{
    int col, row;
    int i;
    scanf("%d %d", &col, &row);

    int **matrix1 = create_matrix(col, row);
    int **matrix2 = create_matrix(col, row);

    // int **result;

    // result = add_matrix(matrix1, matrix2, col, row);

    for (i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
            printf("%d ", (*(*(matrix1 + i) + j) + *(*(matrix2 + i) + j)));
        puts("");
    }

    free(matrix1);
    // free(matrix2);

    return 0;
}
