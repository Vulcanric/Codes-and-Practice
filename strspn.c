#include <stdio.h>

int _strspn(char *s, char *a);
int _strspn(char *s, char *a)
{
	int i, j, counter = 0;
	int status = 1;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				counter++;
				status = 1;
				break;
			}
			else if (s[i] != a[j])
			{
				status = 0;
			}
			j++;
		}

		if (status == 0)
		{
			break;
		}
		i++;
	}
	return (counter);
}

int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
