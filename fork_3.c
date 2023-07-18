
#include <stdio.h>
#include <unistd.h>

int main()
{
        pid_t pid;
        pid_t ppid;
        pid = fork();

        if (pid == -1)
                perror("An Error occur");
        
        else if (pid == 0){
                sleep(30);
                printf("After the fork was called");
        }
        else
        {       
                ppid = getpid();
                printf("I am the parent");
        }
        return (0);
}