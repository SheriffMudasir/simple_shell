#include <stdio.h>
#include "main.h"

/**
 * _path - This command handles the path
 * @command: The command whose path is to be found
 * Return: path if success or NULL otherwise
 */
char *_path(char *command)
{
	char *path = _getenv("PATH");
	char *token, *full_path;

	if (!path)
	{
		perror("PATH not found");
		return (NULL);
	}

	token = strtok(path, ":");
	while (token != NULL)
	{
		full_path = join_path(token, command);
		if (full_path)
		{
			return (full_path);
		}

		token = strtok(NULL, ":");
	}
	return (NULL);
}