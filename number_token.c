#include <stdio.h>
#include "main.h"

/**
 * number_token - This function count the numbers of tokens
 * 
 * @buff: The tokens to be counted
 * 
 * Return: The numbers of token
 */

int number_token(char *buff)
{
	int count = 0;
	char *token;
	char *delim = " \n";


	token = strtok(buff, delim);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delim);
	}
	return (count);
}