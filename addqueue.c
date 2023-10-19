#include "monty.h"

/**
 * addqueue - add node to the back of the stack
 * @n: new value
 * @head: head of the stack
 * Return: no return value
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("error\n");
		exit(0);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	if (temp)
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
