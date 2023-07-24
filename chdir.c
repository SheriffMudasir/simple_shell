#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main()
{
        // Example path to change the current working directory
        const char *path = "/path/to/nonexistent_directory";

        // Attempt to change the current working directory
        if (chdir(path) == -1)
        {
                // An error occurred, print the error message based on errno
                perror("chdir");
                // Optionally, you can also print the error message using strerror(errno)
                // printf("chdir failed: %s\n", strerror(errno));
                return 1;
        }

        // If chdir was successful, get the updated working directory
        char cwd[256];
        if (getcwd(cwd, sizeof(cwd)) != NULL)
        {
                printf("Current working directory: %s\n", cwd);
        }
        else
        {
                perror("getcwd");
                return 1;
        }

        return 0;
}
