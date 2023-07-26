#include <stdio.h>
#include "main.h"

#define DELIMITERS " \n"

/**
 * tokenizer - This function slipt the string into tokens
 * @line: Pointer holding the string to be splitedd
 * Return: The tokens splitted
 */


char **tokenizer(char *line)
{
	int buff = 64, i = 0;
	char **tokens = malloc(buff * sizeof(char *));
	char *token;

	if (!tokens)
	{
		perror("Failed to allocate memory");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, DELIMITERS);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		if (i >= buff)
		{
			buff += 64;
			tokens = realloc(tokens, buff * sizeof(char *));
			if (!tokens)
			{
				perror("Failed to reallocate memory");
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, DELIMITERS);
	}

	tokens[i] = NULL;
	return (tokens);
}