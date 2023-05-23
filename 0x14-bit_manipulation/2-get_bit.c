#include "main.h"

/**
* get_bit - This will return the value of a bit at a given index.
* @n: number of searches to be done
* @index: index of the bit
* Return: bit_val
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 50)
	return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

