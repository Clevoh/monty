#include "monty.h"

/**
 * free_stack - frees a linked list
 * @head: pointer to the head of a stack
 */
void f_free_stack(stack_t **head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
