#include<stdio.h>
/**
 * main- prints all possible different combinations of two digits.
 *
 * Return:Always 0.
 *
 */
int main(void)
{
	int num, num2;

	for (num = 0; num <= 9; num++)
	{
		for (num2 += 1; num2 <= 9; num2++)
		{
			putchar(num + '0');
			putchar(num2 + '0');

			if (num < 8 || num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
