#include <stdlib.h>
#include <stdio.h>
#include "palindrome.h"

/**
 * is_palindrome - checks unsigned int if palindrome
 *
 * @n: number to check
 * @return: 1 if true and 0 if false
 */
int is_palindrome(unsigned long n)
{
	unsigned long test;
	int size, i;
	int *array;

	size = 0;
	for (test = n; test >= 10; test /= 10)
		size++;
	array = malloc(size * sizeof(int));
	i = 0;
	for (test = n; test >= 10; test /= 10)
	{
		array[i++] = test % 10;
		printf("%lu, ", (test % 10));
	}
	printf("\n");
	printf("I am here\n");
	for (i = 0; i < size; i++)
		printf("%u, ", array[i]);
	printf("\n");
	return (0);
}
