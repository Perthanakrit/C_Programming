#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pcre.h> // ตดิ ตงั

ไลบรารดี ว้ย pacman - S mingw - w64 - x86_64 - pcre

    int
    main(int argc, char **argv)
{
    char *input;
    FILE *fin;
    long fsize;
    pcre *regex;
    const char *error;
    int erroffset, reti, found, idx;
    int match[30]; // each group uses 2 int's + 2 int's for group(0)
    int match_size = sizeof(match) / sizeof(match[0]);
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s filename pattern\n", argv[0]);
        return 1;
    }
    fin = fopen(argv[1], "rb");
    if (fin == NULL)
    {
        fprintf(stderr, "File %s not found!\n", argv[1]);
        return 1;
    }
    fseek(fin, 0, SEEK_END);
    fsize = ftell(fin);
    if ((input = (char *)malloc(fsize + 1)) == NULL)
    {
        fprintf(stderr, "Cannot allocate memory %ld bytes!\n", fsize);
        return 2;
    }
    fseek(fin, 0, SEEK_SET);
    fread(input, fsize, 1, fin);
    input[fsize] = 0;
    for (int i = 0; i < fsize; i++)
        if (input[i] == '\r' || input[i] == '\n')
            input[i] = ' ';
    fprintf(stderr, "file size = %ld bytes\n", fsize);
    // Compile the regular expression
    // ex. (0-[0-9]{4}-[0-9]{4})
    regex = pcre_compile(argv[2], 0, &error, &erroffset, NULL);
    if (regex == NULL)
    {
        fprintf(stderr, "Could not compile regex: %s\n", error);
        return 3;
    }
    // Execute the regular expression
    found = 0;
    do
    {
        reti = pcre_exec(regex, NULL, input, strlen(input), 0, 0,

                         match, match_size);

        if (reti < 0)
        {
            if (found)
                printf("Done!\n");
            else
                printf("No match!\n");
            return found ? 0 : 4;
        }
        else
        {
            // If there's a captured group
            for (idx = 2; idx < 2 * reti; idx += 2)
                printf("%s [%.*s]", idx == 2 ? "Found:" : ",",
                       match[idx + 1] - match[idx], input + match[idx]);
            putchar('\n');
            input = input + match[1];
            found++;
        }
    } while (reti >= 0);
    // Free the compiled regular expression
    pcre_free(regex);
    return 0;
}