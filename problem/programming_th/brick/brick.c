#include <stdio.h>
#include <stdlib.h>

char **create_feild(int h, int w)
{
    char **feild = (char **)malloc(sizeof(char *) * h);

    for (int i = 0; i < h; i++)
    {
        feild[i] = (char *)malloc(sizeof(char) * (w));
        scanf("%s", feild[i]);
    }

    return feild;
}

void brick_main(char **feild, int w, int h)
{
    const char rock = 'O';
    const char brick = '#';
    int i, j, num_brick = 0, filled = 0;

    for (i = 0; i < w; i++)
    {
        scanf("%d", &num_brick);
        if (num_brick == 0)
            continue;

        for (j = 0; j < h; j++)
        {
            if (feild[j][i] == rock)
            {
                // feild[j - 1][i] = brick;
                for (int k = 0; k < num_brick; k++)
                {
                    if (j - 1 - k < 0)
                        break;
                    feild[j - 1 - k][i] = brick;
                }
                break;
            }

            if (j == h - 1)
            {
                for (int k = 0; k < num_brick; k++)
                {
                    feild[j - k][i] = brick;
                }
            }
        }
    }
}

int main()
{
    int w, h;
    char **feild;

    scanf("%d %d", &h, &w);

    if (h < 1 || w < 1 || h > 20 || w > 20)
        exit(1);

    feild = create_feild(h, w);

    brick_main(feild, w, h);

    for (int i = 0; i < h; i++)
    {
        printf("%s\n", feild[i]);
    }

    return 0;
}