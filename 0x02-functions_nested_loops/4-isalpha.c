#include "main.h"

/**
 * _isalpha - function that print lower & upper case
 *
 * @c: parameter
 * Return: 1 if c is a letter,lowercase or uppercase
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
