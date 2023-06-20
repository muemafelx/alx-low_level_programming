#include "main.h"
/**
 * _isalpha-check if character is lower or upper
 * @c:character to check if lower.
 * Return:1-if true,0-if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
