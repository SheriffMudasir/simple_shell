#include <stdio.h>
#include "main.h"

/**
 * free_memory - This function frees all allocated memory
 * @line: buffer containig the memory
 * @tokens: Tokens that was allocated
 * Return: nothing
 */

void free_memory(char *line, char **tokens)
{
	free(line);
	free_tokens(tokens);
}