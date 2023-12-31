#include "monty.h"
/**
 * f_add - adds the first and second element of the stack.
 * @head: head of the stack.
 * @counter: number of elements
 * Return: nothing
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
