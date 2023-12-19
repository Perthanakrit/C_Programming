#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FIXEDCOST 5.0
#define BASECOST 2.0

int main()
{
    char sizeIn[5], ppIn[5], chIn[5], muIn[5];
    float selectedSize;
    int pepperoni = 0, cheese = 0, mushrooms = 0;
    float cost, area;
    float price, extraCost = 0.0f;

    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    // select siz
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(sizeIn, 5, stdin); // s = 10, m = 16, l = 20

    // select toppings
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(ppIn, 5, stdin);
    pepperoni = atoi(ppIn);

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(chIn, 5, stdin);
    cheese = atoi(chIn);

    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(muIn, 5, stdin);
    mushrooms = atoi(muIn);

    // size
    if (sizeIn[0] == '1')
    {
        selectedSize = 10.0f;
    }
    else if (sizeIn[0] == '2')
    {
        selectedSize = 16.0f;
    }
    else if (sizeIn[0] == '3')
    {
        selectedSize = 20.0f;
    }

    // toppings
    if (pepperoni == 1)
    {
        extraCost += 0.5f;
    }
    if (cheese == 1)
    {
        extraCost += 0.25f;
    }
    if (mushrooms == 1)
    {
        extraCost += 0.3f;
    }

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    area = M_PI * pow((double)selectedSize, 2.0) / 4.0;

    cost = FIXEDCOST + (BASECOST * area) + (extraCost * area);
    price = cost * 1.5f;

    printf("Your order costs %.2f baht.\nThank you.\n", price);

    return 0;
}
