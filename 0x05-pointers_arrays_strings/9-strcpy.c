#include "main.h"

/**
 * _strcpy - copies the string pointed by src
 * @dest: char type string
 * @src: char typr string
 * Description: copy the string pointed to by pointer `src` to 
 * buffer pointed by `dest`
 * Return: pointer to `dest
 */

char *_strcpy(char *dest, char*src)
{
	int i = -1;

	do 
	{
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');

	return (dest);
}
