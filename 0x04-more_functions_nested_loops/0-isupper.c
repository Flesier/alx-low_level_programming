#include "main.h"

/**
 * _isupper - checks if its uppercase
 * @c: character to be tested
 * Return: 1 if it is , 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
