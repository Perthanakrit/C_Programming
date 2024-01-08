#include <stdio.h>
#define BOARD_SIZE 8

/*

    0: (4,3) (3,2) (2,1) (1,0)
    1: (3,4) (2,5) (1,6) (0,7)
    2: (5,4) (6,5) (7,6)
    3: (5,2) (6,1) (7,0)
            1 4 6 -> 2() 2(n-2) 2(n-3
*/

void bishopMoves(char board[BOARD_SIZE][BOARD_SIZE], int pos_x, int pos_y)
{
    int d;

    for (d = 0; d < 4; d++)
    {
        int x = pos_x, y = pos_y;

        while (1)
        {
            switch (d)
            {
            case 0:
                x++;
                y++;
                break;
            case 1:
                x--;
                y++;
                break;
            case 2:
                x--;
                y--;
                break;
            case 3:
                x++;
                y--;
                break;
            }
            if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE)
                break;

            board[y][x] = 'X';
        }
    }
}

int main()
{
    char board[BOARD_SIZE][BOARD_SIZE] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    int x = 0, y = 0;

    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);

    // put bishop on board
    board[y][x] = 'B';

    bishopMoves(board, x, y);

    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf("%c|", board[i][j]);
        }
        printf("\n------------------\n");
    }

    return 0;
}