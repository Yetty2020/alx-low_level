#include "main.h"
/**
 * _is_upper - check for uppercase letters
 * @c: the chracter to be checked
 * Retutn: 1 if upper and 0 of lower
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
