#include "holberton.h"

/**
 * _strchr - returns a pointer to the first occurence of the
 * character c in the string s
 * @c: caracter to return
 * @s: string to search character
 * Return: pointer to first occurence of character c or null if not found
 */

char *_strchr(char *s, char c)
{

for ( ; ; s++)
{

if (*s == c)
return (s);

if (*s == '\0')
return ('\0');

}
return (s);
}
