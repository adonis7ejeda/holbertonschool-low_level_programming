#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguements it receives
 * @argc: arguement count
 * @argv: string of arguements
 * Return: 0
 */

int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
