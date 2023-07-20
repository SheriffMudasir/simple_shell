#include <stdio.h>
#include <stdio.h>

int main()
{
	// put sleep to see which one prints first
	pid_t val;
	pid_t ppid;
	
	val = fork();

	if (val == -1)
		return (-1);
	if (val == 0){
		sleep(10);
		printf("I am the child");
	}
	else
	{
		ppid = getppid();
		printf("The pid of parent is %u", ppid);

	}

	return (0);
}
