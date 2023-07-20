#include <stdio.h>
#include <unistd.h>

int main()
{
	ssize_t n = 10;
	char *buff;
	printf("Enter your name: ");

	getline(&buff, &n, stdin);

	printf("Your name is %sBuffer size is %d", buff, n);

	free(buff);

	return (0);
}
