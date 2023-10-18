#include "main.h"

/**
 * create_env - creates a structure for the copy
 *	of Environ
 * @environ: the global environment
 * Return: the new structure
 */

New_env *create_env(char **environ)
{
	New_env *env = malloc(sizeof(New_env));

	env->env_var = cp_env(environ);
	return (env);
}
