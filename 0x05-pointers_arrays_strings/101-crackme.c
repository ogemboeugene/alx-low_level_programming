#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <password>\n", argv[0]);
        return 1;
    }

    char *provided_password = argv[1];
    unsigned long sum = 0;

    // Calculate the sum of ASCII values of characters in the provided password
    for (int i = 0; i < strlen(provided_password); i++)
    {
        sum += provided_password[i];
    }

    if (sum == 2772)
    {
        printf("Tada! Congrats\n");
    }
    else
    {
        fprintf(stderr, "[Anything]\n");
    }

    return 0;
}

