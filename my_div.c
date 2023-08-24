#include "monty.h"
/**
 * f_div - divides the first and 2nd element
 * @head: head stack
 * @counter: line num.
 * Return: nothing.
*/
void f_div(stack_t **head, unsigned int counter)
{
stack_t *temp;
int quotient;

if (!(*head) || !(*head)->next)
{
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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

quotient = temp->next->n / temp->n;
temp->next->n = quotient;
*head = temp->next;
free(temp);
}
