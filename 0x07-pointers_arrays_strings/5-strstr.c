#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: string to locate
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle)
{
	int p;
	int q;

	if (needle[0] == '\0')
		return (haystack);

	for (p = 0; haystack[p] != '\0'; p++)
	{
		if (haystack[p] == needle[0])
		{
			for (q = 0; needle[q] != '\0'; q++)
			{
				if (haystack[p + q] != needle[q])
					break;
			}
			if (needle[q] == '\0')
				return (haystack + p);
		}

	}
	return ('\0');
}
