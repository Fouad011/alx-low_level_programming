#include <stdio.h>
/**
* main - prints all combination5 of single digits
* Return: Always 0
*/
int main(void)
{
	int p = 0;
	int q = 0;
	int l = 0;
	int n = 0;

	for (p = 0; p < 10; p++)
	{
		for (q = 0; q < 10; q++)
		{
			for (l = 0; l < 10; l++)
			{
				for (n = 0; n < 10; n++)
				{
					putchar('0' + p);
					putchar('0' + q);
					putchar(' ');
					putchar('0' + l);
					putchar('0' + n);
					if (p != 9 || q != 8 || l != 9 || n != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
