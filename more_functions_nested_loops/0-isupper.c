#include "_isupper.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	return (0);
}
