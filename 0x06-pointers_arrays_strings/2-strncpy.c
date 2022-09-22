#include "main.h"
/**
 * _strncpy - C function that copies a string
 * f the length of the source string is less than the maximum byte number,
 * @dest: buffer storing the string copy
 * @src:the source string
 * @n:max nummber of byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
