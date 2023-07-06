#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: an input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
}
