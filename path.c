#include "main.h"


/**
 * PathToList - Convert the path to a sing list
 * @head: the list
 * @path: the path
 * Return: SUCCESS or Error
 */

int PathToList(list_t **head, char *path)
{
	char *path_cpy = _strdup(path);
	char *tmp;

	if (path == NULL)
		return (-1);

	tmp = _strtok(path_cpy, ":");
	while (tmp)
	{
		add_node_end(head, tmp);
		tmp = _strtok(NULL, ":");
	}

	free(path_cpy);
	return (0);
}
