#include <stdio.h>
#include "main.h"

/**
 * builtin_command - This function executes the builtin function
 * @argv: The command to be executed
 * Return: 1 if successful
 */

extern char **environ;
int builtin_command(char **argv)
{

	if (strcmp(argv[0], "exit") == 0)
	{
		return (0);
	}

	else if (strcmp(argv[0], "env") == 0)
	{
		char **env_ptr = environ;
		while (*env_ptr != NULL)
		{
			printf("%s\n", *env_ptr);
			env_ptr++;
		}
		return (1);

	}
	else if (strcmp(argv[0], "cd") == 0)
	{
		if (argv[1] == NULL)
		{
			fprintf(stderr, "pass argument\"cd\"\n");
		}
		else
		{
			if (chdir(argv[1]) != 0)
			{
				perror("cd");
			}
		}
		return (1);

	}
	return (-1);
}
