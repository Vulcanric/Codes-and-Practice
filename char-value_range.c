#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Displays the range value a "char" can store
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	char c;
	c = CHAR_MIN;
	while (c != CHAR_MAX)
	{
		printf("%d\n", c); //that's to show that type "char" is also an "integer" type
		c = c + 1;
	}
	return (EXIT_SUCCESS);
}
