#include "monty.h"
/**
* f_mul - multiplies the first two elements.
* @head: stack head
* @counter: line numb
* Return: nothing
*/
void f_mul(stack_t **head, unsigned int counter)
{
int len = 0, aux;
stack_t *temp;

for (temp = *head; temp; temp = temp->next)
len++;

if (len < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

aux = (*head)->next->n * (*head)->n;
(*head)->next->n = aux;

temp = *head;
*head = (*head)->next;
free(temp);
}
