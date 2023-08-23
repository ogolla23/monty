#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
stack_t *temp;
int sum;

if (!(*head) || !(*head)->next)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

temp = *head;
sum = temp->n + temp->next->n;
temp->next->n = sum;
*head = temp->next;
free(temp);
}
