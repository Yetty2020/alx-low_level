#include "main.h"
/**
 * print_last_digit - to print the lst digit
 * @n - to checlc the last didit
 * Return: last digit
 */
int print_last_digit(int)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
