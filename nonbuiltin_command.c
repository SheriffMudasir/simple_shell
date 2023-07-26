#include <stdio.h>
#include "main.h"

/**
 * nonbuiltin_command - The function handles the nonbuiltin functions
 * @argv: The command to be handled
 * Return: 1 if successful
 */

int nonbuiltin_command(char **argv)
{
	char *command = argv[0];
	char *path;
	int status;

	if (strcmp(command, "ls") == 0 || strcmp(command, "rm") == 0 || strcmp(command, "grep") == 0)
	{
		path = _path(command);
		if (path)
		{
			argv[0] = path;
			status = execute(argv);
			free(path);
			return (status);
		}
		else
		{
			fprintf(stderr, "Command not found: %s\n", command);
			return (1);
		}
	}
	else
	{
		fprintf(stderr, "Command not found: %s\n", command);
		return (1);
	}
}