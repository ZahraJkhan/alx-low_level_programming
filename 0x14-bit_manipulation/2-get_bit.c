#include "main.h"

/**
 * get_bit - Provides the value of a bit ata given index
 * @n: input
 * @index: index starting from 0 which needs to be outputted
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
