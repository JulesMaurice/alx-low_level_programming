#include "main.h"

/**
 * set_bit - this will set the value of a bit to 1 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: bit index to set to 1
 *
 * Return: 1 if succeed, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 50)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

