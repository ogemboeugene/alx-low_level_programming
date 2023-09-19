#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int main(void)
{
    char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char password[33];
    unsigned long sum;

    srand((unsigned int)time(NULL));

    // Generate a password without null bytes
    do
    {
        for (int i = 0; i < 32; i++)
        {
            password[i] = alpha[rand() % (sizeof(alpha) - 1)];
        }
        password[32] = '\0';
        sum = checksum(password);
    } while (sum != 2772);

    printf("%s\n", password);

    return 0;
}
