#include "monty.h"
/**
* f_pall - prints the stack
* @head: stack head
* @counter: no used
* Return: no return
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	if (*head == NULL)
		return;

	for (temp = *head; temp; temp = temp->next)
		printf("%d\n", temp->n);
}
