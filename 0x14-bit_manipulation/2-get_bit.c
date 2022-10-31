#include "main.h"
#include <stdio.h>
#include <limits.h>


/**
 * get_bit - Provides the value of a bit ata given index
 * @n: input
 * @index: index starting from 0 which needs to be outputted
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}

