#include <stdio.h>
#include <unistd.h>

int main()
{
        char *filename = "/bin/ls";                               // The path to the 'ls' executable
        char *const argv[] = {"/bin/ls", "-l", "/usr/bin", NULL}; // Argument list (program name and its arguments)
        char *const envp[] = {NULL};                              // Environment variables (empty for this example)

        int ret = execve(filename, argv, envp);

        if (ret == -1)
        {
                perror("execve"); // Print an error message if execve fails
                return 1;
        }

        // The code below will only be reached if execve fails (which is unlikely in this example)
        printf("This line will not be executed if execve is successful.\n");
        return 0;
}
