#include <stdio.h>
#include "main.h"
#include <string.h>
#include <unistd.h>

int revStr(char *str)
{
	int i = 0;

	i = i + strlen(str);
	while (i >= 0)
	{
		write(1, &str[i], 1);
		--i;
	}
	return (0);
}
