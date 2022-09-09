#include <stdio.h>

/**
 * main - prints all single digits numbers of base 10 from 0 
 * only using putchar without char variables.
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
