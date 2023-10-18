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

/**
 * cmd_to_path - converts a cmd to full path
 * @head: the path list
 * @command: the cmd to convert
 * Return: the full cmd path
 */

char *cmd_to_path(list_t *head, char *command)
{
	char buff[1024];
	list_t *current;
	struct stat st;

	current = head;
	while (current)
	{
		_strcpy(buff, current->path);
		_strcat(buff, "/");
		_strcat(buff, command);
		if (stat(buff, &st) == 0)
		{
			command = _strdup(buff);
			return (command);
		}
		_strcpy(buff, "");
		current = current->next;
	}

	return (NULL);
}
