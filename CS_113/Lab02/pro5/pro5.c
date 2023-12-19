#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aI[8], bI[8], cI[8];
    int a, b, c;
    int is_triangle, is_equilateral, is_isosceles, is_scalene;

    printf("Enter length of side A: ");
    fgets(aI, 6, stdin);
    a = atoi(aI);

    printf("Enter length of side B: ");
    fgets(bI, 6, stdin);
    b = atoi(bI);

    printf("Enter length of side C: ");
    fgets(cI, 6, stdin);
    c = atoi(cI);

    is_triangle = (a + b > c) && (a + c > b) && (b + c > a);
    if (is_triangle)
    {
        is_equilateral = (a == b) && (b == c) && (a == c);
        is_isosceles = (a == b) || (b == c) || (a == c);
        is_scalene = (a != b) && (b != c) && (a != c);

        if (is_equilateral)
        {
            printf("Triangle type is equilateral.\n");
        }
        else if (is_isosceles)
        {
            printf("Triangle type is isosceles.\n");
        }
        else if (is_scalene)
        {
            printf("Triangle type is scalene.\n");
        }
    }
    else
    {
        printf("Triangle type is invalid.\n");
    }

    return 0;
}