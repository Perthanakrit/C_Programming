#include <stdio.h>
#include <string.h>
/*

*/

int isValid(char str[50])
{
    int i, j, k;
    int len = strlen(str);
    printf("Length: %d\n", len);

    for (int n = 0; n < len; n++)
    {
        if (str[n] == '(')
        {
            i++;
        }
        else if (str[n] == ')')
        {
            if (i == 0)
                return 0;
            i--;
        }
        else if (str[n] == '[')
        {
            if (i == 0)
                return 0;
            j++;
        }
        else if (str[n] == ']')
        {
            if (i == 0)
                return 0;
            j--;
        }
        else if (str[n] == '{')
        {
            if (i == 0)
                return 0;
            k++;
        }
        else if (str[n] == '}')
        {
            if (i == 0)
                return 0;
            k--;
        }
    }

    return 0;
}

int main()
{
    char str[50] = "([)]";
    int result = isValid(str);
    printf("Result: %s\n", result ? "true" : "false");
    return 0;
}
