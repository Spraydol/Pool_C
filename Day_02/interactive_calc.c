#include <stdio.h>

 {
	double a = 0.0, b = 0.0;
	char op = '\0';

	printf("Enter the operation: ");
	scanf(" %c", &op);

	printf("Enter the first number: ");
	scanf("%lf", &a);

	printf("Enter the second number: ");
	scanf("%lf", &b);

	if (op == '+') {
		printf("Result: %g\n", a + b);
	} else if (op == '-') {
		printf("Result: %g\n", a - b);
	} else if (op == '*') {
		printf("Result: %g\n", a * b);
	} else if (op == '/') {
		if (b == 0.0) {
			puts("Error: division by zero.");
			return 1;
		}
		printf("Result: %g\n", a / b);
	} else {
		puts("Unknown operation. Use + - * /");
		return 1;
	}

	return 0;
}

