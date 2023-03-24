#include "main.h"

/**
 * _isdigit - check if character is digit or not
 * @c: digit to be checked
 *
 * Return: 1 if @c is digit
 * otherwise we return 0
 */

int _isdigit(int c)
{
	int start = 48, end = 57;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
