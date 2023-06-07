#include <stdio.h>
#include <stdlib.h>

/**
 * main - print characters 'a' to 'z' along with their "integer value"
 *
 * Return: Exit success
 */
int main(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		printf("Value: %d, char: %c\n", c, c);
		c++;
	}
	return (0);
}
