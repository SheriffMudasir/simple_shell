#include <stdlib.h>
#include "main.h"

/**
 * free_memory - This fuction frees all allocated memory
 * @line: buffer containig the memory
 * @tokens: Tokens that was allocated
 * Return: nothing
 */

void free_memory(char *line, char **tokens)
{
	int i;

	free(line);
	if (tokens)
	{
		for (i = 0; tokens[i] != NULL; i++);
		{
			free(tokens[i]);
		}
		free(tokens);
	}
}
