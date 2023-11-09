#include "variadic_functions.h"

/**
 * sum_them_all - Parameters sumed by functions.
 * @n: count of arguments.
 *
 * Return: Its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_num;
	unsigned int num;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(my_num, n);

	for (num = 0; num < n; num++)
		sum += va_arg(my_num, int);

	va_end(my_num);

	return (sum);
}
