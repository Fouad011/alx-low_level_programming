#include <stdio.h>
/**
* main - prints all combination4 of single digits
* Return: Always 0
*/
int main(void)
{
	int p = 0;
	int q = 1;
	int l = 2;
	int n = 2;
	int m = 1;

	for (p = 0; p < 8; p++)
	{
		for (; q < 9; q++)
		{
			for (; l < 10; l++)
			{
				putchar('0' + p);
				putchar('0' + q);
				putchar('0' + l);
				if (p != 7 || q != 8 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			l = ++n;
		}
		q = ++m;
		n = q + 1;
		l = q + 1;
	}
	putchar('\n');
	return (0);
}
