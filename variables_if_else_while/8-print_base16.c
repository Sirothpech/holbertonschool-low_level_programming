#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: fin script
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
