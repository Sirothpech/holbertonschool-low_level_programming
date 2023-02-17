#include<stdio.h>


/**
 * main - entry point
 * Printf: - afficher texte
 * Return: - fin script
 */

int main(void)
{int intType;
float floatType;
double doubleType;
char charType;
long longType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(doubleType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
