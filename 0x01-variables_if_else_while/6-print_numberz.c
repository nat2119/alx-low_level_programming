#include <stdio.h>
/**
 * main - Entery point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
