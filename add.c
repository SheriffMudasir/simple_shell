#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t PID;
	pid_t PPID;

	PID = getpid();
	PPID = getppid();
	printf("The sum is %d\n", 2+5);
	printf("The process ID is %d\n", PID);
	printf("The process ID is %d\n", PPID);

	return (0);
}