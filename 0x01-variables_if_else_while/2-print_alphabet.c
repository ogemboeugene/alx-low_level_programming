#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Get a leter and compare it to letter z
 * Return : Always 0 (success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
