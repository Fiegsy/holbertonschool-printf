#include "main.h"
/**
 * retrieve - function modifiers
 * @cast: modifiers cast
 * @args: arguments
 * Return: Success
 */
int retrieve_func(char cast, va_list args)
{
	int index = 0;
	int cmp_func = 0;

	modif_t modif[] = {
		{'%', print_mod},
		{'s', print_string},
		{'c', print_char},
		{'i', print_num},
		{'d', print_num},
		{0, NULL}
	};
	while (modif[index].modifiers)
	{
		if(cast == modif[index].modifiers)
			cmp_func += modif[index].p(args);
		index++;
	}
	if (cmp_func == 0)
	{
		cmp_func += _putchar('%');
		cmp_func += _putchar(cast);
	}
	return (cmp_func);
}

