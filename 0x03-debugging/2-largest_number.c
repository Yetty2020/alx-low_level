#include "main.h"
/**
 * largest number - returns the largerst number
 * @a: first integer
 * @b: second interger
 * @c: third interger
 * Return: largest numer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a < c)
	{
		largest = a;

	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
