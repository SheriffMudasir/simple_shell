#include <stdio.h>
#include <stdio.h>

int main()
{
	// put sleep to see which one prints first
	int val;
	
	val = fork();

	if (val == -1)
		return (-1);
	if (val == 0)
		printf("After fork i became two");
	else
		printf("I am the parent");

	return (0);
}
