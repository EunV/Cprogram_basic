#include <stdio.h>

void print(double input[], int n);
double min(double input[], int n);
double max(double input[], int n);

int main(void)
{
	double data[10] = { 0.7, 4.0, 1.0, 7.0, 8.0, 5.0, 9.0, 10.0, 3.0, 6.0 };

	print(data, 10);
	printf("최소 = %.1lf\n", min(data, 10));
	printf("최대 = %.1lf\n", max(data, 10));

	return 0;
}

void print(double input[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%.1lf ", input[i]);

	printf(" \n");
}

double min(double input[], int n)
{
	int i;
	int min = input[0];

	for (i = 1; i < n; i++)
	{
		if (input[i] < min)
			min = input[i];
	}

	return min;
}

double max(double input[], int n)
{
	int i;
	double max = input[0];

	for (i = 1; i < n; i++)
	{
		if (input[i] > max)
			max = input[i];
	}

	return max;
}