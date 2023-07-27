#include "main.h"
/**
 * free_tokens - This function frees memory for alllocated tokens
 * @tokens: Token-memory to be freed
 * Return: Nothing
 */

void free_tokens(char **tokens)
{
        if (tokens)
        {
                for (int i = 0; tokens[i] != NULL; i++)
                {
                        free(tokens[i]);
                }
                free(tokens);
        }
}