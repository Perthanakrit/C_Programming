#include <stdio.h>
int main()
{
    char s[] = "saippuakivikauppias";
    int len, is_palindrome;
    int i;

    for (len = 0; s[len] != '\0'; len++)
        ;

    i = 0;

    while (len > i)
    {
        if (s[i] != s[len])
            is_palindrome = 0;
        i++;
        len--;
    }

    puts(is_palindrome ? "Palindrome" : "Not Palindrome");

    return 0;
}