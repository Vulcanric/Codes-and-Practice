#include <stdio.h>
/**
 * main - computes the number of seconds in a year
 *
 * Return: 0. (Success)
 */

	char option;
	int year = 8640 * 365; // Number of seconds in a day multiplied by 365
	int lyear = 8640 * 366; // Number of seconds in a day multiplied by 366

void replay()

{
	printf("Error! Unknown command\nEnter 'y' for year and 'l' for leap year\n");

	option = getchar();

	if (option == 'y')
		printf("There are %d seconds in a year\n", year);
	else if (option == 'l')
		printf("There are %d seconds in a leap year\n", lyear);
	else
		printf(" ");
}

int main()
{
	/*Ask the user to choose between year and leap year */
	printf("Year or Leap year\nEnter 'y' for year and 'l' for leap year\n");
	option = getchar();
	/* Using an 'if' statement to determine which type of year to show */
	if (option == 'y')
		printf("There are %d seconds in a year\n", year);
	else if (option == 'l')
		printf("There are %d seconds in a leap year\n", lyear);
	else
		printf("ERR\n");
	while (option != 'l' && option != 'y')
		replay();

	return (0);
}
