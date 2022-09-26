#include "main.h"

/**
 * *_memset - Fills memory with constant byte
 * @b: memory space to be filled
 * @s: memory space to be filled
 * @n: bytes of memory
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
