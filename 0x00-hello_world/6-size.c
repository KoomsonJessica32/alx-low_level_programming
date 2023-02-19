#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: AlwAays 0 (Success)
 */
int main(void)
{
	printf("Size of an char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byite(s)\n", sizeof(int));
	printf("Size of an long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of an float: %lu byte(s)\n", sizeof(float));
	return (0);
}
