#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more header goes there*/
/* Betty style doc for function main goes there*/
/**
 * main - prints if the number is positive,negative or 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
