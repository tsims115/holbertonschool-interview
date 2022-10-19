#include "lists.h"

/**
 * is_palindrome - tests to see if linked list is a palindrome
 *
 * @head: head of list to check
 * Return: 1 if true and 0 if false
 */
int is_palindrome(listint_t **head)
{
	listint_t* cur = NULL;
	int *array = NULL;
	int size = 0;
	int i;

	for (cur = *head; cur != NULL; cur = cur->next)
		size++;
	cur = *head;
	array = malloc(size * sizeof(int));
	for (i = 0; cur != NULL; cur = cur->next)
		array[i++] = cur->n;
	for (i = 0; i < size; i++)
		if (array[i] != array[size - 1 - i])
			return (0);
	free(array);
	return (1);
	
}
