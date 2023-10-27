#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 *             one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits required to flip to get from one number
 * to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits_flipped = 0, result;

	result = n ^ m;

	while (result)
	{
		bits_flipped += result & 1;
		result >>= 1;
	}

	return (bits_flipped);
}

