#include "main.h"

/**
 * _built - Checks the exixstence of builtins
 *	commands
 * @token_0: the strings to check
 * Return: Success or Failure
 */

int _built(char *token_0)
{
	char *possible[] = {"env", "setenv", "unsetenv", "cd", NULL};
	int i;


	for (i = 0; possible[i]; i++)
	{
		if (_strcmp(token_0, possible[i]) == 0)
		{
			return (1);
		}
	}
	return (0);
}
