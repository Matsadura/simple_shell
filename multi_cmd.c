#include "main.h"

void empty(void);
/**
 * _Multi - checks for special seperators
 * @L: the string to check
 * Return: the seperator
 */

char *_Multi(char *L)
{
	char and[2] = "&&", or[2] = "||";
	char semi[1] = ";";
	int i;

	for (i = 0; L[i]; i++)
	{
		if (L[i] == semi[0])
			return (";");

		else if (L[i] == and[0] && L[i + 1] == and[1])
			return ("&&");

		else if (L[i] == or[0] && L[i + 1] == or[1])
			return ("||");
	}

	return (NULL);
}
