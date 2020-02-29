#include "holberton.h"

/**
 * _strspn - returns number of bytes in the initial sengment s
 * @s: string to count in
 * @accept: chars to accept
 * Return: number of bytes;
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
