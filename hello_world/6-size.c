#include<stdio.h>


/**
 * main - entry point
 * Printf: - afficher texte
 * Return: - fin script
 */

int main()
{int intType;
float floatType;
double doubleType;
char charType;
long longType;

printf("Size of a char: %zu bytes\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longType));
printf("Size of a long long int: %zu bytes\n", sizeof(doubleType));
printf("Size of a float: %zu byte\n", sizeof(floatType));

return (0);
}
