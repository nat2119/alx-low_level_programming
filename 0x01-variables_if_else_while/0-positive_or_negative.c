#include <stdlib.h>
#include <time.h>
/**
 * main - Entery point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}
