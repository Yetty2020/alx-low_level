#include "main.h"
/**
 * print_alphabet - to prnt
 *
 * Return: 0 Always
 */
void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar("\n");
}
