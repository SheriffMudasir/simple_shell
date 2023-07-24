#include <stdio.h>
#include <signal.h>

// Custom signal handler function
void customHandler(int signum)
{
        printf("Received signal %d\n", signum);

        // Add your custom signal handling code here
        // For example, you can take specific actions based on the received signal
        // or set flags to communicate with the rest of your program.
}

int main()
{
        // Register the custom signal handler for SIGUSR1 (user-defined signal 1)
        signal(SIGUSR1, customHandler);

        // Your main program logic goes here
        // ...

        return 0;
}
