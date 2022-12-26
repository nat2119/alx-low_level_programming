#include <stdio.h>
/**
 * main - Entery point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	char a;

	n = 0;
	a = 'a';
	while (n < 10)
	{
		putchar(n + '0');
		a++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
