#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %6d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %6d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %6d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %6d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %6d byte(s)\n", (int) sizeof(float));
	return (0);
}
