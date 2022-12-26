#include <stdio.h>
/**
 * main - Entery point
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
