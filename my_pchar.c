#include "monty.h"

/**
 * free_stack - frees a stack
 * @head: pointer to the head of the stack
 * Return: no return value
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

/**
* f_pchar - prints the char at the top of the stack,
* followed by a new line
* @head: stack head
* @counter: line_number
* Return: no return
*/

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		exit(EXIT_FAILURE);
	}

	for (temp = *head; temp; temp = temp->next)
	{
		if (temp->n > 127 || temp->n < 0)
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		printf("%c\n", temp->n);
	}
}
