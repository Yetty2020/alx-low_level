#include <stdio.h>
/*
 * function main - entry point 
 * Return: 0 always (succes)
 *
 */

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
