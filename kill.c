#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>

int main()
{
        pid_t target_pid = 1234; // Replace 1234 with the actual PID of the target process

        // Send the SIGUSR1 signal to the target process
        if (kill(target_pid, SIGUSR1) == -1)
        {
                perror("kill");
                return 1;
        }

        printf("Signal SIGUSR1 sent to PID: %d\n", target_pid);
        return 0;
}
