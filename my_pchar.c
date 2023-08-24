#include "monty.h"
/**
* f_pchar - prints char at head of stack.
* @head: stack head
* @counter: line numb.
* Return: nothing.
*/
void f_pchar(stack_t **head, unsigned int counter)
{
stack_t *temp;
for (temp = *head; temp; temp = temp->next)
{
if (temp->n > 127 || temp->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", temp->n);
}
}
