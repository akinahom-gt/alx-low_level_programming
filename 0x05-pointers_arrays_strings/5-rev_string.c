#include "main.h"
#include "string.h"

/**
<<<<<<< HEAD
 * print_rev - prints a string in reverse
 * @s: the string
**/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
void rev_string(char *s)
{
	int i, len = strlen(s), j = 0;
	char temp;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}

}
