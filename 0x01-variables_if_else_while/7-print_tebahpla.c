#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
		{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
