#include "main.h"
/**
 * main - main function
 * _putchar: print the alphabets putchar
 * Return: always 0
 */

void print_alphabet(void)
{
  char c;
  
  for (c= 'a' ; c <= 'z' ; c++)
  {
    _putchar(c);
  }
  _putchar('\n');
}  
