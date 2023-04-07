#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: integer 1
 * @m: integer 2
 * Return: count of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
/* XOR les deux nombres pour trouver les bits qui diffèrent*/
	unsigned int count = 0;

	while (xor_result)
	{ /* compter le nombre de bits réglés dans le résultat XOR*/
		count += xor_result & 1;
		xor_result >>= 1;
/* décalage à droite pour vérifier le bit suivant*/
	}
	return (count);
}
