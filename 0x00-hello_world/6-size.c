#include <stdio.h>
/**
 * main - Prints the size of various types a based on the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeoff(char));
	printf(" size of an int: %zu bytes(s)\n", sizeoff(int));
	printf(" size of a long int: %zu bytes(s)\n", sizeoff(long int));
	printf("size of a long long int: %zu bytes(s)\n", sizeoff(long long int));
	printf("size of a float: %zu bytes(s)\n", sizeoff(float));
	return (0);
}
