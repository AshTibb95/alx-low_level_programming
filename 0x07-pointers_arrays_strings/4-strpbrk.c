#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched
 * Return: NULL if no set is matched
 */

char *_strpbrk(char *s, char *accept)

{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
