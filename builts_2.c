#include "main.h"

/**
 * _unset_env - removes a variable from env
 * @var_name: the name of the variable
 * @env: the copy environement
 * Return: 0 for Success 1 for failure
 */

int _unset_env(char *var_name, New_env *env)
{
	int i;

	if (var_name == NULL)
	{
		perror("unsetenv");
		return (-1);
	}

	for (i = 0; env->env_var[i]; i++)
	{
		if (_strncmp(env->env_var[i], var_name, _strlen(var_name)) == 0)
		{
			free(env->env_var[i]);
			for (; env->env_var[i]; i++)
			{
				env->env_var[i] = env->env_var[i + 1];
			}
			return (0);
		}
	}
	return (0);
}