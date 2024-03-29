#include "main.h"

/**
 * flip_bits - this returns the number of bits needed
 * to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 50; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
		count++;
	}

	return (count);
}

