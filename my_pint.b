#include "monty.h"

/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
    if (*head == NULL)
    {
        handle_error(counter, "can't pint, stack empty");
        return;
    }

    printf("%d\n", (*head)->n);
}
/**
 * handle_error - handles errors by printing an error message and exiting
 * @counter: line_number
 * @message: error message to print
 * Return: no return
*/
void handle_error(unsigned int counter, char *message)
{
    fprintf(stderr, "L%u: %s\n", counter, message);
    fclose(bus.file);
    free(bus.content);
    free_stack(*head);
    exit(EXIT_FAILURE);
}
