#include "main.h"

/**
 * _puts_recursion - Print string followed by new line
 * @s: String to print
 *
 * Return: 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
