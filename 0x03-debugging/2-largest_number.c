#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main(void)
{
int largest_number(a, b, c)
{
	 int largest;

	 if (a > b && a > c)
	 {
		 largest = a;
	 }
	  else if (b > a && b > c)
	  {
		  largest = b;
	  }
	 else
	 {
		 largest = c;
	 }

	 return (largest);
}
}