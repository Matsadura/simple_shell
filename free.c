#include "main.h"
#include <stdarg.h>

void free_functions(void);
/**
 * free_char1 - frees multple arguments of char *
 * @n: number of arguments
 */
void free_char1(const unsigned int n, ...)
{
	va_list all;
	unsigned int i;

	if (n == 0)
		return;

	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		free(va_arg(all, char *));
	}

	va_end(all);
}