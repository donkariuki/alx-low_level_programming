#include "main.h"
#include <stdio.h>
 /**
  * _memcpy - input 
  * @dest: input pointer to string destination
  * @src: input pointer to string destination
  * @n: number of bytes
  * Return: pointer to destination string
  */

char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while ( i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
