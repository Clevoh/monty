#include "monty.h"

/**
 * addnode - adds a node to the head stack
 * @head: pointer to head node
 * @n: new value
 * Return: no return
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL) /*memory allocation failure */
	{
		printf("error\n");
		exit(0);
	}
	if (temp)
	{
		temp->prev = new_node;
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
	}
}
