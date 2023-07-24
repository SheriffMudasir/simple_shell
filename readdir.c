#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>

int main()
{
        const char *dir_name = "."; // Current directory

        // Open the directory stream
        DIR *dir = opendir(dir_name);
        if (dir == NULL)
        {
                perror("opendir");
                return 1;
        }

        // Read directory entries
        struct dirent *entry;
        while ((entry = readdir(dir)) != NULL)
        {
                // Ignore current and parent directories entries (".", "..")
                if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
                {
                        continue;
                }

                // Print information about the directory entry
                printf("Name: %s\n", entry->d_name);
                printf("Inode number: %lu\n", entry->d_ino);
                printf("File type: ");
                switch (entry->d_type)
                {
                case DT_REG:
                        printf("Regular file\n");
                        break;
                case DT_DIR:
                        printf("Directory\n");
                        break;
                case DT_LNK:
                        printf("Symbolic link\n");
                        break;
                default:
                        printf("Unknown\n");
                        break;
                }

                // Print an empty line between entries for better readability
                printf("\n");
        }

        // Close the directory stream
        closedir(dir);

        return 0;
}
