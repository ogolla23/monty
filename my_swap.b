#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
    if (!(*head) || !((*head)->next))
    {
        handle_error(counter, "can't swap, stack too short");
        return;
    }

    int temp = (*head)->n;
    (*head)->n = (*head)->next->n;
    (*head)->next->n = temp;
}
void handle_error();
