#include <stdio.h>
#include "main.h"

/**
 * _getenv - This function gets the environmental variable
 * @name: The path to be found
 * 
 * Return: The environmental variable and null if it faile
 */

extern char **environ;

char *_getenv(const char *name)
{
	int i;
	size_t lent;

	lent = strlen(name);

	for (i = 0; environ[i] != NULL; i++)
	{
		if (strncmp(environ[i], name, lent) == 0 && environ[i][lent] == '=')
		{
			return (&(environ[i][lent + 1]));
		}
	}

	return (NULL);
}