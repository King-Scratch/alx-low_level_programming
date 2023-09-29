#include "main.h"

/**
 * print_binary - to display the binary equivalent of a decimal number
 * @a: value to print in binary
 */
void print_binary(unsigned long int a)
{
	int b, count = 0;
	unsigned long int current;

	for (b = 63; b >= 0; b--)
	{
		current = a >> b;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
