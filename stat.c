#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main()
{
        const char *filename = "example_file.txt";

        // Declare a struct stat to store file information
        struct stat file_stat;

        // Use the stat() function to retrieve information about the file
        if (stat(filename, &file_stat) == -1)
        {
                // stat() failed, print the error message and exit
                fprintf(stderr, "Error: %s\n", strerror(errno));
                return 1;
        }

        // Print file information
        printf("File: %s\n", filename);
        printf("Size: %ld bytes\n", file_stat.st_size);
        printf("Owner UID: %d\n", file_stat.st_uid);
        printf("Owner GID: %d\n", file_stat.st_gid);
        printf("Permissions: %o\n", file_stat.st_mode & 0777);
        printf("Last Access Time: %ld\n", file_stat.st_atime);
        printf("Last Modification Time: %ld\n", file_stat.st_mtime);
        printf("Last Status Change Time: %ld\n", file_stat.st_ctime);

        return 0;
}
