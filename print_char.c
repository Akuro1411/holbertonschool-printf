#include "main.h"
/**
 * pc - Prints character c
 * Return: number of characters printed
 */
void pc()
{
	char c;

	c = va_arg(ptr, int);
	_putchar (c);
}
