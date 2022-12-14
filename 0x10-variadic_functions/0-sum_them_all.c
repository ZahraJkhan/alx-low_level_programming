#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all its parameters
 * @n: no of parameters
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: in n = 0-0 else sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);
	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
