#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes charcter to stdout
 * @c: The character to write
 *
 * Return: On success 1.
 * On error, -1 is return, and errno is set appropriately
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
