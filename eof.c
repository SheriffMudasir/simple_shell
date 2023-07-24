#include <stdio.h>

int main()
{
        int c;

        // Read characters from standard input until end-of-file is reached
        while ((c = getchar()) != EOF)
        {
                // Process the character
                putchar(c);
        }

        return 0;
}
