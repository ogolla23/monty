#include "monty.h"
/**
* f_pop - removes the top element of the stack
* @head: stack head
* @counter: line_number
* Return: no return
*/
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *temp;
(void)counter;
for (temp = *head; temp; temp = temp->next)
{
*head = temp->next;
free(temp);
break;
}
}
