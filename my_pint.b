#include "monty.h"
/**
* f_pint - prints the top
* @head: stack head
* @counter: line_number
* Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
stack_t *temp;
(void)counter;
for (temp = *head; temp; temp = temp->next)
{
printf("%d\n", temp->n);
}
}
