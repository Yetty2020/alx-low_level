#include "main.h"
/**
 * main - check code
 * Return: 0 Always
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	a = 0;
	while(a < 10)
	{
		a = 'a';

		while(a <= 'z')
		{
			_putchar('a');
			a++;
		}
		_putchar("\n");
		b++;
	}
}
