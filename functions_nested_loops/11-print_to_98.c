#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - affiche les nb entiers
 * @n: check nb
 * return: fin du script
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
		{
			for (; n >= 98; n--)
			{
				if (n == 98)
				{
					printf("%d", n);
					printf("\n");
				}
				else
				{
					printf("%d, ", n);
				}
			}
		}
}
