#include "monty.h"

/**
 * f_pint - prints the value at the top of the stack
 * @head: head of a node
 * @counter: line_number
 * Return: no return
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT FAILURE);
	}
	printf("%d\n", head->n);
}