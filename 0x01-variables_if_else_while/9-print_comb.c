#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point main
 * Description - prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}

