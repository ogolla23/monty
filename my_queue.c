#include "monty.h"
/**
* f_queue - prints the top
* @head: stack head
* @counter: line number
* Return: nothing
*/
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}

/**
* addqueue - add node at the end of stack
* @n: new element.
* @head: head of the stack
* Return: nothing.
*/
void addqueue(stack_t **head, int n)
{
stack_t *new_node, *aux;

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = n;
new_node->next = NULL;

aux = *head;
do {
if (!aux)
{
*head = new_node;
new_node->prev = NULL;
break;
}
if (!aux->next)
{
aux->next = new_node;
new_node->prev = aux;
break;
}
aux = aux->next;
} while (aux);
}
