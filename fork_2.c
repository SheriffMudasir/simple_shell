#include <stdio.h>
#include <unistd.h>

int main()
{
        printf("Before the process was called");

        pid_t pid;
        pid = fork();

        if (pid == -1)
        {
                perror("An Error occur");

        }

        printf("After the fork was called");

        return (0);
}