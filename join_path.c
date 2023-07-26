#include <stdio.h>
#include "main.h"

#define PATH_DELIMITER "/"

/**
 * join_path - This function join the paths
 * @path: the path to join
 * @command: the command
 * Return: the joined path;
 */
char *join_path(char *path, char *command)
{
	size_t path_len = strlen(path);
	size_t command_len = strlen(command);
	size_t delimiter_len = strlen(PATH_DELIMITER);
	char *full_path;
	char *ptr;

	full_path = (char *)malloc(path_len + delimiter_len + command_len + 1);
	if (!full_path)
	{
		perror("Failed to allocate memory");
		exit(EXIT_FAILURE);
	}

	ptr = full_path;
	memcpy(ptr, path, path_len);
	ptr += path_len;

	memcpy(ptr, PATH_DELIMITER, delimiter_len);
	ptr += delimiter_len;

	memcpy(ptr, command, command_len);
	ptr += command_len;

	*ptr = '\0';

	return (full_path);
}
