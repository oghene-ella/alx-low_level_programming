#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for code uppercase character
 * @c: The character to be checked
 * Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
