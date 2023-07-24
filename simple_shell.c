#include <stdio.h>
#include<unistd.h>
#include <sys/types.h>

int main()
{
	char *line;
	char buff[256];
	while (1){
		printf(":) ");
		getline(line, buff, stdin);
		printf("%s\n");
	}

	return (0);
}
