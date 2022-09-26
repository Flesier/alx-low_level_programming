#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to be printed
 * Return: On Success 1
 * On error: -1 and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
