#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n  = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (l = m + 1; l <= 9; l++)
			{
				putchar(n % 10 + '0');
				putchar(m % 10 + '0');
				putchar(l % 10 + '0');
				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
