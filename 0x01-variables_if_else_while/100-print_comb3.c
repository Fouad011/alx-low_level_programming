/**
* main - prints all combination of single digits
* Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 1; n < 90; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar(n);
		}
		if (n != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
