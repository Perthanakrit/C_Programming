#include <stdio.h>

int main()
{
	char s[10] = "123456789";
	int i, j;

	for (i = 8, j = 205; i >= 0; i--)
	{
		s[i] = '0' + j % 2;
		j /= 2;
	}

	printf("%s\n", s);

	return 0;
}
