#include "main.h"
#include <stdio.h>

/**
 * _abs - function that checks the absolute value
 *
 * @a: parameter to be checked
 *
 * Return: always 0
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
