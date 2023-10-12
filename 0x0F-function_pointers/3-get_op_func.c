#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects the option to perform arithmetic operation
 * @s: operator argument
 * Return: result of the slected choice
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    /* initialize i */
    i = 0;

    /* s does not match any of the operands */
    while (ops[i].op != NULL && (ops[i].op) != *s)
	    i++;

    return (ops[i].f); /* return operation */
}
