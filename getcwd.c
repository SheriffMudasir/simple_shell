#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main()
{
        char cwd[256]; // Buffer to store the current working directory

        if (getcwd(cwd, sizeof(cwd)) == NULL)
        {
                // The getcwd function failed. The error code is set in errno.
                // Print the error message using perror().
                perror("getcwd");
                // Optionally, you can also use strerror() to get the error message as a string.
                // printf("getcwd failed: %s\n", strerror(errno));
                return 1;
        }

        // Print the current working directory
        printf("Current working directory: %s\n", cwd);

        return 0;
}
