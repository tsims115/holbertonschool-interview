#include "lists.h"

/**
 * is_palindrome - tests to see if linked list is a palindrome
 *
 * @head: head of list to check
 * Return: 1 if true and 0 if false
 */
int is_palindrome(listint_t **head)
{
	listint_t* cur_node = *head;
	int *array = NULL;
	int size = 0;
	int i;

	if (head == NULL)
		return (1);
	while (cur_node != NULL)
	{
		cur_node = cur_node->next;
		size++;
	}
	cur_node = *head;
	array = malloc(size * sizeof(int));
	for (i = 0; cur_node != NULL; cur_node = cur_node->next)
		array[i++] = cur_node->n;
	for (i = 0; i < size; i++)
		if (array[i] != array[size - 1 - i])
			return (0);
	return (1);
	
}
