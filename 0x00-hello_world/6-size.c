#include <stdio.h>
/**
 * main - print the various types of size on the computer
 * Description:using the main function
 * Return:Always 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of char: %zu byte(s)\n", sizeof(c));
	printf("size of int: %zu byte(s)\n", sizeof(i));
	printf("size of long int: %zu byte(s)\n", sizeof(li));
	printf("size of long long int: %zu byte(s)\n", sizeof(lli));
	printf("size of float: %zu byte(s)\n", sizeof(f));
	return (0);
}
