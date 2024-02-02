#include <stdio.h>
#include <math.h>
int main()
{
    char filename[80];
    FILE *fout;
    int w = 1024, h = 768;
    int i, j;
    float x, y;
    sprintf(filename, "output_p3.ppm");
    fout = fopen(filename, "w+");
    if (fout == NULL)
    {
        fprintf(stderr, "Cannot open %s for write!\n", filename);
        return 1;
    }
    fprintf(fout, "P3\n");
    fprintf(fout, "# Example\n");
    fprintf(fout, "%d %d\n", w, h);
    fprintf(fout, "255\n");
    for (j = 0; j < h; j++)
    {
        for (i = 0; i < w; i++)
        {
            x = i / (float)h;
            y = 1 - 2 * (j / (float)h);
            if (y < sin(x * 2 * M_PI))
                fprintf(fout, "255 128 255 ");
            else
                fprintf(fout, "128 128 255 ");
        }
        fprintf(fout, "\n");
    }
    fprintf(fout, "\n");
    fclose(fout);
}