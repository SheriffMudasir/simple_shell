#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
        FILE *file = fopen("nonexistent_file.txt", "r");
        if (file == NULL)
        {
                // The fopen function failed. The error code is set in errno.
                // Print the error message using perror().
                perror("fopen");
                // Or you can use strerror() to get the error message as a string.
                printf("fopen failed: %s\n", strerror(errno));
                return 1;
        }

        // Code to process the file here (not shown in this example).

        fclose(file);
        return 0;
}
