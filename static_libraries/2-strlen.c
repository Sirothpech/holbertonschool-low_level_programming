#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: longueur string
 * Return: value string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;
	return (a);

}
