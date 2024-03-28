#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point
{
    double x;
    double y;
} Point;

double distance(double, double);

int main(int argc, char const *argv[])
{
    int i, n;
    Point *points = (Point *)malloc(sizeof(Point) * n);

    // printf("Number of Points: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        // printf("P%d.X: ", i + 1);
        scanf("%lf", &points[i].x);
        // printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].y);
    }

    puts("Length:");
    for (i = 0; i < n - 1; i++)
    {
        double dX = points[i + 1].x - points[i].x;
        double dY = points[i + 1].y - points[i].y;
        printf("Length from P%d(%.2lf, %.2lf) ", i + 1, points[i].x, points[i].y);
        printf("to P%d(%.2lf, %.2lf) is %.2lf\n", i + 2, points[i + 1].x, points[i + 1].y, distance(dX, dY));
    }

    return 0;
}

double distance(double dx, double dy)
{
    return sqrt(pow(dx, 2) + pow(dy, 2));
}