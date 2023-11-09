#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: String input to be printed btw strings.
 * @n: count of arguments
 * @...: Arguments
 * Return: No return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pt;
	unsigned int ind = 0;
	char *str;

	va_start(pt, n);
	for (ind = 0; ind < n; ind++)
	{
		str = va_arg(pt, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (ind < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pt);
}
