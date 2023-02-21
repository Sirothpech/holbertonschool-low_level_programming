#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Putchar - description
 * Return: fin du script
 */

int main(void)
{
	int alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)

		putchar (alphab);

	putchar ('\n');

	return (0);
}
