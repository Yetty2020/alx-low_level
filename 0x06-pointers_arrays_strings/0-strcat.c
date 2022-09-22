#include "main.h"
#include  <stdio.h>
/**
 * _strcat concatenates teh string
 * @dest: string will be appended
 * @src: second string to be appended
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src);
{
	char *dest[12] = "Hello";
	char *src[12] = "World";

	strcat(*dest, *src);
	printf("strcat( *dest, *src):   %s\n", *dest);
       	return (0)
}
