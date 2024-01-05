#include <stdio.h>
#include <math.h>
#include <stdlib.h>

static int i;

int main()
{
	int isEven(int value); // function prototype declaration
	int sum(int data[], int n);
	int number();
	double sumNum(float data[], int n);
	float sumNumO(float data[], int n);
	int sumTw(int data[], int n);
	int i;

	// printf("%lf\n", sumNum((float[]){1.0, 2.0, 3.0}, 3));
	// printf("%f\n", sumNumO((float[]){1.0, 2.0, 3.0}, 3));
	// printf("%d\n", sumTw((int[]){1, 2, 3}, 3));

	printf("%d, ", i);
	return 0;
}

double sumNum(float data[], int n)
{
	int i;
	double total = 0;

	for (i = 0; i < n; i++)
	{
		total += data[i];
	}
	return total;
}

float sumNumO(float data[], int n)
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
	{
		total += data[i];
	}
	return total;
}

int sumTw(int data[], int n)
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
	{
		total += data[i];
	}
	return total;
}

float sumTh(int data[], int n)
{
	int i;
	float total = 0;

	for (i = 0; i < n; i++)
	{
		total += data[i];
	}
	return total;
}

int number()
{
	int i;
	return i;
}

int isEven(int value)
{
	if (value % 2 == 0)
	{
		return 1;
	}
	return 0;
}

int sum(int data[], int n)
{
	if (n == 0)
		return 0;
	else
		return sum(data, n - 1) + data[n - 1];
}
