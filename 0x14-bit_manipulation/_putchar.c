#include "main.h"
#include <unistd.h>
/**
 * _putchar - inputs the character c to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * If error occurs, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
