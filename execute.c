#include "main.h"
#include <stdio.h>
#include <unistd.h>


/**
 * execute - This function executes the command
 * @argv: The command to be executed
 * Return: 1 if successful
 */

int execute(char **argv)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execve(argv[0], argv, environ) == -1)
		{
		perror(argv[0]);
		}
		exit (EXIT_FAILURE);
	}

	else if (pid < 0)
	{
		perror("Failed to fork child process");
	}
	else
	{
		do
		{
			wpid = wait(&status);

		} while (!WIFEXITED(status) && ! WIFSIGNALED(status));
	}
	return (1);


}