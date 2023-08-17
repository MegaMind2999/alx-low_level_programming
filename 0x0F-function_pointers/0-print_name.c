#include "function_pointers.h"

/**
 * print_name - function  to print a name.
 * @name: the name.
 * @f: function pointer.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
