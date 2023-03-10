#include "main.h"

/**
 * _isalpha - Checks for char alphabet
 * @c: the char to be checked
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
