#include "main.h"

/**
* _puts - print string
* @str: pointer to string
*/
void _puts(char *str)
{

	for (; *str != '\0'; str++)
		_putchar(*str + 0);
	_putchar('\n');
}
