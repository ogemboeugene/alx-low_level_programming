
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * checksum - computes the checksum of a string
 * @s: input string
 * Return: the computed checksum
 */
unsigned long checksum(char *s)
{
    unsigned long sum = 0;
    while (*s != '\0')
    {
        sum += *s;
        s++;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <password>\n", argv[0]);
        return 1;
    }

    char *provided_password = argv[1];
    unsigned long provided_checksum = checksum(provided_password);

    if (provided_checksum == 2772)
    {
        printf("Tada! Congrats\n");
        return 0;
    }
    else
    {
        printf("Invalid password\n");
        return 1;
    }
}
