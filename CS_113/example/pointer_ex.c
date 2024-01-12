#include <stdio.h>

void action(double (*pfunc)(int, float), int x, float y)
{
    printf("%.2lf\n", (*pfunc)(x, y));
}

double add(int x, float y)
{
    return x + y;
}

double mul(int x, float y)
{
    return x * y;
}

void h(char a[])
{
    while (*a != '\0')
    {
        printf("%c", *a - 1);
        ++a;
    }
}

int main()
{
    char c, *cp;
    float f, *fp;
    long g, *gp;
    int d[] = {1, 2, 3, 4};
    char *str = "Hello";
    int *ptr = d;
    int x = -2, y = 1;
    double (*func)(int, float);

    ptr += 2;
    printf("%p\n", ptr);
    // printf("%p, %p : %ld\n", ptr, d, (ptr - d) % 4); // d : d[0]

    // printf("%p\n", cp);
    // printf("%lu %lu\n", sizeof(c), sizeof(cp));
    // printf("%lu %lu\n", sizeof(f), sizeof(fp));
    // printf("%lu %lu\n", sizeof(g), sizeof(gp));g

    func = (x + y) ? add : mul;
    action(func, 2, 2.5);

    //("Hello");
}