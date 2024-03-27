#include "main.h"
/**
 * ps - Prints string
 * Return: number of characters printed
 */
void ps(void)
{
	int j = 0;
	char *str;

	str = va_arg(ptr, char *);
	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
		l++;
	}
}
