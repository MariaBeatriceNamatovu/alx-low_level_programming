#include "main.h"
 /**
  * print_square - prints a square
  * @size: size of the square
  * return: void
  */
void print_square(int size);
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; 1 < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	
