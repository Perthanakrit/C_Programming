#include <stdio.h>

void condition()
{
    if (!0) // 5 -> bool -> true
    {
        printf("%s\n", "false");
    }
    else
    {
        printf("%s\n", "true");
    }
}

int main()
{
    // printf("%.2f\n", 1.5);
    int x = 1;
    char s[10] = "123456789";
    s[++x]++;

    printf("%s\n", s);
    printf("%d\n", s[9]);
    printf("%c\n", s[9]);
    return 0;
}
