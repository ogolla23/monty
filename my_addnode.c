#include "monty.h"
/**
 * addnode - adds a node to the top stack
 * @head: stack head.
 * @n: new element.
 * Return: nothing.
*/
void addnode(stack_t **head, int n)
{
stack_t *new_node;

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
exit(0);
}

new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;

if (*head)
(*head)->prev = new_node;

*head = new_node;
}

