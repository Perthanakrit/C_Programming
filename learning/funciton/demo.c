#include <stdio.h>
#include <math.h>

int main()
{
	int isEven(int value); // function prototype declaration

	printf("%d is %s\n", 5, isEven(5) ? "even" : "odd");
	printf("%.2f", M_PI);
	return 0;
}

int isEven(int value)
{
	if (value % 2 == 0)
	{
		return 1;
	}
	return 0;
}
