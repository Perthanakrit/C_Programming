#include <stdio.h>

struct coord
{
	int x;
	int y;
};

typedef struct
{
	struct coord topleft;
	struct coord bottomright;

} Rectangle;

int main()
{
	int length, width;
	long area;

	Rectangle my_box;

	struct coord cd[3] = {{1, 2}, {3, 4}, {5, 6}};
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d %d\n", cd[i].x, cd[i].y);
	}
}
