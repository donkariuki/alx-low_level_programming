#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The charecter to be checked.
 * Return: 1 if character is a letter, uppercase or lowercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c > 'A' && c <= 'Z'))
return (1);
else
return (0);
}
