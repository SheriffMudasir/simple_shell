#include <stdio.h>
#include <unistd.h>

int main()
{
        pid_t pid = fork();

        if (pid == -1)
        {
                // Fork failed
                fprintf(stderr, "Fork failed.\n");
                return 1;
        }
        else if (pid == 0)
        {
                // Child process
                printf("Hello from the child process!\n");
        }
        else
        {
                // Parent process
                printf("Hello from the parent process! Child PID: %d\n", pid);
        }

        return 0;
}
