#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: string s
 * @accept: string to match
 * Return: pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{

int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
return ('\0');
}
