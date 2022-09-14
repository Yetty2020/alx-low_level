#include ""main.h"
/**
 * main - check code
 * Return: 0 Always
 */
int main(void)
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
