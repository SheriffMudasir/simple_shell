#include <stdio.h>
#include <stdio.h>

int main()
{
	int val;
	printf("Before fork i was one");
	val = fork();

	if (val == -1)
		return (-1);
	printf("After fork i became two");

	return (0);
}
