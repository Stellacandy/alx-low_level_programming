#include "main.h"

/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return: 0 if sucessful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
