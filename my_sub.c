#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *temp;
int sub, count;

temp = *head;
for (count = 0; temp != NULL; count++)
temp = temp->next;
if (count < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = *head;
sub = temp->next->n - temp->n;
temp->next->n = sub;
*head = temp->next;
free(temp);
}
