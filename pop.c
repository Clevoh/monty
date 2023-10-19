#include "monty.c"
/**
 * f_pop - prints the top
 * @head - head of stack
 * @counter: line_number
 * Return: no return
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *head

	if (*head == NULL)
	{
		fprintf(stder, "L%d can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
