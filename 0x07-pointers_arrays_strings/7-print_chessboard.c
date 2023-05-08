#include <stdio.h>
#include "main.h"
 /**
  * print_chessboard - entry point prints chess board
  * @a: array
  * Description: this function  prints the  chess board
  * Return: always 0 (success)
  */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[i][n]);
		putchar('\n');
	}
}
