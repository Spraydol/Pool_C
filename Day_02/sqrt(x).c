#include <stdio.h>

double my_sqrt(double x)
{
	double g = x / 2.0;
	double prev;

	if (x < 0)
		return -1;
	if (x == 0)
		return 0;

	while (1) {
		prev = g;
		g = (g + x / g) / 2.0;
		if (g == prev)
			break;
	}
	return g;
}

 
{
	double x;

	printf("Enter a number: ");
	if (scanf("%lf", &x) != 1) {
		printf("Bad input\n");
		return 1;
	}

	if (x < 0) {
		printf("Negative number\n");
		return 1;
	}

	printf("Result: %.2f\n", my_sqrt(x));
	return 0;
}