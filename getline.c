#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main()
{
        char *line = NULL;
        size_t len = 0;
        ssize_t read;

        // Open the file for reading
        FILE *file = fopen("example.txt", "r");
        if (file == NULL)
        {
                perror("Error opening the file");
                return 1;
        }

        // Read lines from the file using getline()
        while ((read = getline(&line, &len, file)) != -1)
        {
                // Print the line read (including the newline character)
                printf("Line read: %s", line);
        }

        // Close the file and free the memory allocated by getline()
        fclose(file);
        if (line != NULL)
        {
                free(line);
        }

        return 0;
}
