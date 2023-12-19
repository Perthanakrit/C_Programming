#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FIXEDCOST 5
#define BASECOST 2

int main()
{
    char sizeIn[5], ppIn[5], chIn[5], muIn[5];
    int selectedSize, pepperoni = 0, cheese = 0, mushrooms = 0;
    float cost, area;
    float price, extraCost = 0.0;

    // select size
    fgets(sizeIn, 5, stdin); // s = 10, m = 16, l = 20

    // select toppings
    fgets(pepperoni, 5, stdin);
    pepperoni = atoi(ppIn);
    fgets(cheese, 5, stdin);
    cheese = atoi(chIn);
    fgets(mushrooms, 5, stdin);
    mushrooms = atoi(muIn);

    // size
    if (sizeIn == "s")
    {
        selectedSize = 10;
    }
    else if (sizeIn == "m")
    {
        selectedSize = 16;
    }
    else if (sizeIn == "l")
    {
        selectedSize = 20;
    }

    // toppings
    if (pepperoni == 1)
    {
        extraCost += 0.5;
    }
    if (cheese == 1)
    {
        extraCost += 0.25;
    }
    if (mushrooms == 1)
    {
        extraCost += 0.3;
    }

    area = M_PI * pow(selectedSize, 2.0) / 4.0;

    cost = 1.5 * (FIXEDCOST + (BASECOST * area) + (extraCost * area));
    price = cost * 1.5;

    printf("price: %.2f\n", price);

    return 0;
}
