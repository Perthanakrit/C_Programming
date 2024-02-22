#include <stdio.h>
#include <string.h>

typedef struct
{
    char id[12];
    int score;
} studentRecord;

void init(studentRecord list[], int size)
{
    int i, j;
    char thisID[] = "5510000";
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (thisID[j] == '\0')
            {
                list[i].id[j++] = 49 + i;
                break;
            }
            list[i].id[j] = thisID[j];
        }
        list[i].id[j] = '\0';
        list[i].score = 0;
    }
}

void enterScore(studentRecord list[], int size)
{
    int i, score;
    char id[12];

    scanf("%s %d", id, &score);

    for (i = 0; i < size; i++)
    {
        if (strstr(list[i].id, id))
        {
            list[i].score = score;
            break;
        }
    }
}

void printRecords(studentRecord list[], int size)
{
    int i;

    printf("   ID        Score\n");
    for (i = 0; i < size; i++)
    {
        printf("%s       %d\n", list[i].id, list[i].score);
    }
}

int main()
{
    int enter;
    studentRecord list[3];

    init(list, 3);
    enterScore(list, 3);
    printRecords(list, 3);

    // printf("%d\n", strcmp("hello", "hello"));
    return 0;
}