#include "monty.h"

/**
* f_pstr - prints string at the stack.
* @head: stack head
* @counter: line number
* Return: nothing
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	for (temp = *head; temp; temp = temp->next)
	{
		if (temp->n > 127 || temp->n <= 0)
			break;
		printf("%c", temp->n);
	}
	printf("\n");
}
