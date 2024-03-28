#include <stdio.h>
#include <string.h>

int main()
{
    // char m[] = "per";
    // char name[20];
    // printf("Enter name: ");
    // scanf("%s", name);
    // printf("Your name is %s.\n\t %s", name, m);
    char n[] = {'p', 'e', 'r', 's', 'o', '\0'};
    printf("%s\n", n); // return Null

    char str[] = "Hello World";
    char *p = strchr(str, ' '); // p will point to the first space (' ') in the string

    printf("%s\n", p); // Output: World

    return 0;
}