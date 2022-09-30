#include "main.h"

/**
 * main - Entry point :
 *
 * prints the minimum number of coins to make change for an amount of money..
 * @argv: Declare an array variable of Char type.
 *
 * @argc: Declare a variable of int type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
