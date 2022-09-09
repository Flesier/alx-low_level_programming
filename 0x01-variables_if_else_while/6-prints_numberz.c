#include <stdio.h>

/**
 * main - print digits of base 10 from 0 using
 * putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');

	putchar('\n');

	return (0);
}
