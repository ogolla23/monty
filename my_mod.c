#include "monty.h"
/**
* f_mod - computes the rest of the division of the second
* top element of the stack by the top element of the stack
* @head: stack head
* @counter: line_number
* Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
{
stack_t *temp;
int remainder;

if (!(*head) || !(*head)->next)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

temp = *head;
if (temp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

remainder = temp->next->n % temp->n;
temp->next->n = remainder;
*head = temp->next;
free(temp);
}
