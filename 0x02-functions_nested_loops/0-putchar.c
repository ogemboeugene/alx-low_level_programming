#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints _putchar, folloed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abe[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(abe[c]);
	}
	_putchar('\n');
	return (0);
}
