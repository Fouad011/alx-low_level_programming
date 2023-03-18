#include <stdio.h>
/**
* main - prints all combination3 of single digits
* Return: Always 0
*/
int main(void)
{
	int p = 0;
	int n = 1;
	int q = 1;
	for (p = 0; p < 9; p++)
	{
		for (q; q < 10; q++)
		{
			putchar('0' + p);
			putchar('0' + q);
			if (p != 8 || q != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		q = ++n;
	}
	putchar('\n');
	return (0);
}
