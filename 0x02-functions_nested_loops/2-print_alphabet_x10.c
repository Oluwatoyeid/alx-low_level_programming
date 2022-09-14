#include "main.h"

/**
* print_alphabet_x10 -> prints the lowercase alphabets
* Description: function uses _putchar function to print
* alphabet in lowercase 10 times
* Return: Nothing.
*/

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
