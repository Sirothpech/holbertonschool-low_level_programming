#include "main.h"
/**
 * leet - code 1337
 * @s: array s
 * Return: retourne s
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	while (s[i++] != '\0')

	{
		for (j = 0; letter[j] != '\0'; j++)
			if (s[i] == letter[j])
				s[i] = number[j];
	}
	return (s);
}
