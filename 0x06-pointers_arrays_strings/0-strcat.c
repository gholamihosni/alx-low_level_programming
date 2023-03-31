#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strcat -This function combine two strings;
* @dest: chart
* @src: chart
* Return: a pointer to the resulting string des
*/
char *_strcat(char *dest, char *src)
{
	int length_of_string, z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0 ; src[z] != '\0' ; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
