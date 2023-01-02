#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;
	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
