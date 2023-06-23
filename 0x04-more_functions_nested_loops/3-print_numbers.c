#include"main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char i;
	for (i = 0; i<=9;i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
