#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line
 * @n: number of times the character '_' should be printed
 *
 * Return: nothing.
 */
void print_line(int n)
{
	int i = 1; /* Declare a variable "i" and assign it to 1 */
	int counter = 0; /* Counts the number of underscores printed to form line */

	for (i = 1; i <= n; i++) /* for loop */
	{
		counter++; /* counter increments */
		if (n > 0)
			putchar('_');
		else
			putchar('\n');
	}
	putchar('\n');
	printf("%d underscores\n", counter);
}
