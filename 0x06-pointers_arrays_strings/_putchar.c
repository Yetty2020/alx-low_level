#include "main.h"
#include "unistd.h"
/**
 * _putchar - writes the character c to stdput
 * @c: the character to print
 * Return: on sucess 1
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
