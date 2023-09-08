#include <stdio.h>
/**
 * main - Entry point main
 * Description: prints the alphabets lowercase uppercase
 * followed by a new line
 * Return: Always 0 (Successs)
 */
int main(void)
{
	char c, x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

