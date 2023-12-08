#include <stdio.h>

int main()
{
    int n;
    float sumWeight;
    float avgWeight;

    scanf("%d", &n);
    float weight[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter weight of student: ");
        scanf("%f", &weight[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sumWeight += weight[i];
    }

    printf("Average weight of students: %.2f\n", sumWeight / n);

    return 0;
}
