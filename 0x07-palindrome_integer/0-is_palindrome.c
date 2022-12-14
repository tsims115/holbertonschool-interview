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
	int array[20];

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
	i = 0;
	for (test = n; i < size / 2; test /= 10)
	{
		if (array[i] != array[size - i - 1])
			return (0);
		i++;
	}
	
	return (1);
}
