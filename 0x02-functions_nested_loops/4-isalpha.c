#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if the character is letter, or uppercase else 0
 */
int _isalpha(int c);
{
	if ((c >= '97' && c <= '122') || (c >= '65' && c <= '90'))
		return (1);
		return (0);
}
