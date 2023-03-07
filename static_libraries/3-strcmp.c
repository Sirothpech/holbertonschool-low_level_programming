#include "main.h"
/**
 * _strcmp - compare array
 * @s1: check 1
 * @s2: check 2
 * Return: result compare
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
