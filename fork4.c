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
		
		printf("I am the child");
	}
	else
	{
		sleep(20);
		printf("I am the FATHER	");


	}

	return (0);
}
