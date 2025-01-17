#include <math.h>
#include <stdlib.h>

double newtonSqrt(double n, double e)
{
	double x = 1;
	while (abs(x*x - n) > e)
		x = (x + n / x) / 2;
	return x;
}
