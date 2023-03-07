#include "main.h"

/**
 * rev_string - reverse string
 * @s: string var
 */

void rev_string(char *s)
{
	int a = 0, i = 0;
	char tab;

	while (s[i++])
		a++;
	for (i = a - 1; i >= a / 2; i--)
	{
		tab = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = tab;
	}
}
