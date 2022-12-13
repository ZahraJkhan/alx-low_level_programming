#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: The character to be checked.
 *
 * Return: 1 is character is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
