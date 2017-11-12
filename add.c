#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10, b = 20;
	double c = 2.4, d = 3.6;
	int sum1 = a + b;
	double sum2 = c + d;
	printf("%d + %d = %d\n", a, b, sum1);
	printf("%lf + %lf = %lf\n", c, d, sum2);
	return EXIT_SUCCESS;
}