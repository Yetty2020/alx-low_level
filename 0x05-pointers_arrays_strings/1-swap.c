#include "main.h"
/**
 * swap_int - swaps the valure of the two integers
 * @a:the fitst integer
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
