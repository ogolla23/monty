#include "monty.h"

/**
 * f_pop - removes the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *temp = *head;
*head = temp->next;
free(temp);
if (*head == NULL)
{
handle_error(counter, "can't pop an empty stack");
return;
}

}
void handle_error();
