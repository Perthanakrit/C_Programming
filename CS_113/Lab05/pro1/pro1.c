#include <stdio.h>
#include <math.h>
#include <string.h>

int is_automorphic(int base, long num)
{
    int i, conrrent;

    for (int i = 1; i <= 9; i++)
    {
        int mod_num = num % (int)pow(10, i);
        int is_ok = mod_num == base;

        if (is_ok)
            return 1;
        if (mod_num > base)
            return 0;
    }
    return 0;
}

int main()
{
    int n = 0;
    long pow_n;
    char res_txt[10] = "Yes";
    char is_txt[10] = " ";

    printf("Input n = ");
    scanf("%d", &n);

    pow_n = (long)pow(n, 2);

    if (is_automorphic(n, pow_n) == 0)
    {
        strcpy(res_txt, "No");
        strcpy(is_txt, " not ");
    }

    printf("n^2 = %ld\n", pow_n);

    printf("%s. %d is%sautomorphic number.\n", res_txt, n, is_txt);

    return 0;
}

/*
5776 / 10 570 -> 76
*/