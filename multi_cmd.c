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

/**
 * X_M - the commands to execute
 * @d: the delimiter
 * @L: the line that contains the commands
 * @X: the exit code
 * @N: the number of consecutive commands
 * @P: the name of the program
 * @p: the ph singly linked list
 * @env: the copy environement
 */
void X_M(char *d, char *L, int *X, size_t *N, char *P, list_t *p, New_env *env)
{
	if (_strcmp(d, ";") == 0)
		*X = M_c(d, L, N, P, p, env, 0);

	else if (_strcmp(d, "&&") == 0)
		*X = M_c(d, L, N, P, p, env, 1);

	else if (_strcmp(d, "||") == 0)
		*X = M_c(d, L, N, P, p, env, 2);
}
