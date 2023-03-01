#include "main.h"
/**
 * _atoi - change char to int
 * @s: char check
 * Return: retourne int
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int unsi = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			unsi = (unsi * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	unsi *= min;
	return (unsi);
}
