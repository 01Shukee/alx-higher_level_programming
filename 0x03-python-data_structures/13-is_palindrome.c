/**
 * File: 13-is_palindrome.c
 * Editor: Ifeanyichukwu Chukwudubem
 */
#include "lists.h"
#include <stddef.h>
/**
 * @*reverse_listint - Reverses a linked list in place
 * @head: Pointer to a pointer pointing to the first item in the list
 * Return: The new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *next, *prev = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * reverse_listint - Reverses a linked list in place
 * @head: A pointer to the head of the linked list
 * Return: If the linked list is not a palindrome - 0.
 * If the linked list is a palindrome - 1.
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp, *rev, *mid;
	size_t size = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	tmp = *head;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	tmp = *head;
	for (i = 0; i < (size / 2) - 1; i++)
		tmp = tmp->next;
	if ((size % 2) == 0 && tmp->n != tmp->next->n)
		return (0);
	tmp = tmp->next->next;
	rev = reverse_listint(&tmp);
	mid = rev;
	tmp = *head;
	while (rev)
	{
		if (tmp->n != rev->n)
			return (0);
		tmp = tmp->next;
		rev = rev->next;
	}
	reverse_listint(&mid);
	return (1);
}
