#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: numbers to take in
 * Return: none
 */

int main(int argc, char **argv)
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
