#include "main.h"
 /**
  * _strchr - locates a character in a string
  * @s: string input
  * @c: charatter to find
  * Return: pointer to first occurence of c character
  */

char *_strchr(char *s, char c)
{
	unsigned int = 0;
	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
