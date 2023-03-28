#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to be printed 
 *
 * Return: nothing no sucess
 */
void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
