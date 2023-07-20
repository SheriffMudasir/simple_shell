#include <stdio.h>
#include <unistd.h>

int main()
{
	char *str = "I love you";
	char *token;
	char *delim = " ";

	token = strtok(str, delim);

	while (token){
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);

	
}
