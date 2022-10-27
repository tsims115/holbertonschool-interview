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
	unsigned long array[20];

	size = 0;
	for (test = n; test >= 10; test /= 10)
		size++;
	size++;
	i = 0;
	for (test = n; i < size; test /= 10)
	{
		array[i] = test % 10;
		i++;
	}
	printf("\n");
	return (0);
}
