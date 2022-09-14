#include "main.h"

/**
 * print_sign - Function that prints a sign number
 * @n: the number of which the sign will be printed
 *
 *Return: 0 if zero, 1 > 0 and -1 if < 0
 */
 int print_sign(int n)
 {
	 if (n > 0)
	 {
		 _putchar('+');
		 return (1);
	 }
	 else if (n == 0)
	 {
		 _putchar('0');
		 return (0);
	 }
	 else
	 {
		 _putchar('-');
		 return (-1);
	 }
 }
