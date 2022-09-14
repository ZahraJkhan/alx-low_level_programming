#include <main.h>

/**
 * main - Prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var[] = "_putchar";
	int i;
	int lenVar = sizeof(var) / sizeof(var[0]);

	for (i = 0; i < lenVar; i++)
	{
		_putchar(var[i]);
	}
	_putchar('\n');
	return (0);
}
