#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
        pid_t pid = fork();

        if (pid < 0)
        {
                fprintf(stderr, "Failed to create a child process\n");
                exit(1);
        }
        else if (pid == 0)
        {
                // Child process
                printf("Hello from the child process!\n");
                // Perform child-specific tasks here
        }
        else
        {
                // Parent process
                printf("Hello from the parent process!\n");
                // Perform parent-specific tasks here
        }

        return 0;
}
