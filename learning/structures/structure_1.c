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

typedef struct triangle
{
	int base;
	int height;
} t1;

int main()
{
	int length, width;
	long area;

	Rectangle my_box;

	t1 ti = {1, 2};

	struct coord cd[3] = {{1, 2}, {3, 4}, {5, 6}};
	int i;

	printf("%d, %d\n", ti.base, ti.height);
}
