#include<stdio.h>
/**
 * main- prints all possible different combinations of three digits.
 *
 * Return:Always 0.
 *
 */
int main(void)
{
int num, num2, num3;

for (num = 0; num <= 9; num++)
{
for (num2 = num + 1; num2 <= 9; num2++)
{
for (num3 = num2 + 1; num3 <= 9; num3++)
{
putchar(num + '0');
putchar(num2 + '0');
putchar(num3 + '0');
if (num < 7 || num2 < 8 || num3 < 9)
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
