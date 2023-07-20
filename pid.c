#include <stdio.h>
#include <unistd.h>

int main()
{
	int a = 5;
	int b = 9;
	pid_t pid;
	pid_t ppid;

	printf("The sum is %d", a+b);

	pid = getpid();
	ppid = getppid();

	printf("The pid is %u\n", pid);
	printf("The ppid is %u\n", ppid);

	return (0);

}

