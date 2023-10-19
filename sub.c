#include "monty.h"

/**
 * f_sub - subtracts two contents of nodes
 * @head: head of node
 * @counter: line_number
 * return: no return
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int minus, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	minus = temp->next->n - temp->n;
	temp->next->n = minus;
	*head = temp->next;
	free(temp);
}
