#include "main.h"
#include <stdio.h>

int raisePowr(int pow, int num)
{
	int i;
	int result = num;
	for (i = 1; i < pow; i++)
	{
		result = result * num;
	}
	return (result);
}
