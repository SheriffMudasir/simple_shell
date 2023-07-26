#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 if successfull
 */
int main()
{

	char *buff = NULL;
	char **tokens;
	int i = 1;
	size_t buffsize = 1024;
	int argc;
	const char *prompt = ":) ";
	int status;

	while (i)
	{
		if (isatty(fileno(stdin)))
		{
			write(1, prompt, 3);
		}

		buff = (char *)malloc(buffsize * sizeof(char));
		if(!buff)
		{
			perror("Failed to allocate memory!");
			exit(EXIT_FAILURE);
		}

		if (getline(&buff, &buffsize, stdin) == -1)
		{
			free(buff);
			break;
		}

		argc = number_token(buff);
		if (argc == 0)
		{
			free(buff);
			continue;
		}

		tokens = tokenizer(buff);
		if (!tokens)
		{
			continue;
		}

		if (builtin_command(tokens) == 0)
		{
			free_memory(buff, tokens);
			status = 0;
		}
		else
		{
			status = nonbuiltin_command(tokens);

			free_memory(buff, tokens);
		}

	} 
	return (0);
}