#include "variadic_functions.h"

/**
 * print_numbers - A functions that prints numbers.
 *
 * @separator: string to be printed between numbers.
 * @n: count of arguuments passed to the function.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_num;
	unsigned int num;

	va_start(my_num, n);

	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(my_num, int));

		if (separator && num < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(my_num);
}
