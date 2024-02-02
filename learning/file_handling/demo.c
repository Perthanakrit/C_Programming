#include <stdio.h>

void cat_file(char *filename)
{
    FILE *fin;
}

void cat_commandline(int argc, char **argv);

int main(int argc, char const *argv[], char *envp[])
{

    // int i;

    // for (i = 0; argv[i] != NULL; i++)
    // {
    //     printf("Argument %d: %s\n", i, argv[i]);
    // }
    // puts("----");
    // for (i = 0; envp[i] != NULL; i++)
    // {
    //     printf("Environment Variable %d: %s\n", i, envp[i]);
    // }

    return 0;
}

void cat_commandline(int argc, char **argv)
{
    char c;
    FILE *fin;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        return;
    }

    fin = fopen(argv[1], "r");

    if (fin == NULL)
    {
        fprintf(stderr, "File %s not found!\n", argv[1]);
        return;
    }

    while ((c = fgetc(fin)) != EOF)
    {
        putchar(c);
    }

    fclose(fin);
}