#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 99; n++)
	{
		for(m = 1; m <= 99; m++)
		{
		       if (m > n)
		       { 
			       putchar((n / 10) + '0');
			       putchar((n % 10) + '0');
			       putchar(' ');
			       putchar((m / 10) + '0');
			       putchar((m % 10) + '0');
			       if (n != 98 || m != 99)
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
