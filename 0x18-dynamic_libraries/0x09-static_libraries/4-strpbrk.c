#include "main.h"

/**
 * *_strpbrk - Searches a string for set of byte
 * @s: string to check
 * @accept: string to check against
 *
 * Return: Pointer to byte in s matching accept else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
