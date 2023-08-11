#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
lastdigit = n % 10;
if (lastdigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
else if ((lastdigit < 6) && (lastdigit != 0))
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
else
{
	printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
	return (0);
}
