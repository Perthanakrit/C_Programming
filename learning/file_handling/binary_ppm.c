#include <stdio.h>
#include <math.h>
#define W 1024
#define H 768
unsigned char rgb[3 * W * H];
int main()
{
    char filename[80];
    FILE *fout;
    int x, y, xx, yy, zz;
    int angle;
    unsigned char r, g, b;
    sprintf(filename, "output_p6.ppm");
    fout = fopen(filename, "wb+");
    if (fout == NULL)
    {
        fprintf(stderr, "Cannot open %s for write!\n", filename);
        return 1;
    }
    fprintf(fout, "P6\n");
    fprintf(fout, "# Example\n");
    fprintf(fout, "%d %d\n", W, H);
    fprintf(fout, "255\n");
    for (y = 0; y < H; y++)
    {
        for (x = 0; x < W; x++)
        {
            xx = x - W / 2;
            yy = H / 2 - y;
            angle = atan2(yy, xx);
            angle = angle * (180 / M_PI);

            if (xx * xx + yy * yy <= H * H / 4)
            {
                r = 218;
                g = 165;
                b = 32;
                zz = H * H / 4 - xx * xx - yy * yy;
                r = r * zz / (H * H / 4);
                g = g * zz / (H * H / 4);
                b = b * zz / (H * H / 4);
            }
            else
            {
                r = 32;
                g = 225;
                b = 225;
            }
            rgb[3 * W * y + 3 * x] = r;
            rgb[3 * W * y + 3 * x + 1] = g;
            rgb[3 * W * y + 3 * x + 2] = b;
        }
    }
    fwrite(rgb, 3, W * H, fout);
    fclose(fout);
}
