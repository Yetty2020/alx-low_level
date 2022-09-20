#include "main.h"
/**
 * _puts - prints the string to stdour
 * @str: string to return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
