#include "main.h"

/**
 * _strpbrk_token - searches a string for any of a set
 *	of bytes
 * @s: the string
 * @accept: the set of bytes
 * Return: pointer to the byte s that matches one
 *	of the bytes in accept or NULL if no such
 *	byte is found
 */

char *_strpbrk_token(char *s, const char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}

/**
 * _strspn_token - gets the length of a prefix
 *	substring
 * @s: the string
 * @accept: the bytes
 * Return: the number of bytes in the initial
 *	segment of s which consists of only
 *	bytes from accept
 */

unsigned int _strspn_token(char *s, const char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}