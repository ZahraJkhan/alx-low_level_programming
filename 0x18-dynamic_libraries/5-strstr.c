#include "main.h"

/**
 * *_strstr - Locates a substring
 * @needle: substring to look for
 * @haystack: the string to look in
 *
 * Return: Pointer to beg of substring else 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
