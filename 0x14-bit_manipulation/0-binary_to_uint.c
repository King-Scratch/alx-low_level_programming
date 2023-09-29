#include "main.h"

/**
 * binary_to_uint - changes a binary number to unsigned int
 * @c: the  string containing the binary number
 *
 * Return: changed number
 */
unsigned int binary_to_uint(const char *c)
{
	int d;
	unsigned int dec_val = 0;

	if (!c)
		return (0);

	for (d = 0; c[d]; d++)
	{
		if (c[d] < '0' || c[d] > '1')
			return (0);
		dec_val = 2 * dec_val + (c[d] - '0');
	}

	return (dec_val);
}
