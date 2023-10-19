#include "monty.h"

/**
 * f_push - pushes an element to the stack
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg) /* argument received from the user */
	{
		if (bus.arg[0] == '-') /* checks whether the value added is negative*/
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; /* not an integer */
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n, counter");
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else /* if no arguments were received */
	{
		fprintf(stderr, "L%d: usage: push integer\n, counter");
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
