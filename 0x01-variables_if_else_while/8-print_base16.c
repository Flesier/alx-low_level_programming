#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int hx;
	char lt;

	for (hx = 0; hx < 10; hx++)
		putchar((hx % 10) + '0');

	for (lt = 'a'; lt <= 'f'; lt++)
		putchar(lt);

	putchar('\n');

	return (0);
}
