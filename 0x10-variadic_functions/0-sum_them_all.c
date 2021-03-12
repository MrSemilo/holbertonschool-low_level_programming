#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int val;
	va_list sum;
	int i;

	if (n == 0)
		return (0);

	val = 0;
	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		val += va_arg(sum, int);
	}
	va_end(sum);

	return (val);
}
