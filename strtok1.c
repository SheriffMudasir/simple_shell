#include <stdio.h>
#include <unistd.h>

int main()
{
	char *str = "I love you";
	char *token;
	char *delim = " ";

	token = strtok(str, delim);

	printf("%s\n", token);

	return (0);
}
