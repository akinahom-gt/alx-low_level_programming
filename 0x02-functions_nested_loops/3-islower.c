#include"main.h"

/**
 * _islower - checks for lowercase character.
 *
 * ch: character to be checked
 * Return: 1 if lowercase else 0.
 */
int _islower(int ch)
{
	if (ch >= 97 && ch < 123)
		return (1);
	else
		return (0);
}

