#include "main.h"

/**
 * _islowern- Checks for lowercase character
 * @c: The charater to be checked
 * Return: 1 for lowercase character or 0 anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
