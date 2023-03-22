#include "main.h"
#include <stdio.h>

/**
 * print_sign - function that print signs of a number
 *
 * @n: finctionfunct paramerter
 * Return: 1 and + if n is greater than zero
 * and 0 and 0 if n is zero
 * and -1 and - if n less than zero
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
