#include "main.h"
#include  <stdio.h>
/**
 * main - concatenate the string
 * Return: Always 0
 */
int main(void)
{
	char *dest[12] = "Hello";
	char *src[12] = "World";

	strcat(*dest, *src);
	printf("strcat( *dest, *src):   %s\n", *dest);
	 return (0)
}
