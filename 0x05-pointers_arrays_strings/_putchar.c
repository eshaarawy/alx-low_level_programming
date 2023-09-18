#include <unistd.h>
#include "main.h"

/**
* _putchar - writes character to stdout
* @c: Character
*
* Return: 1 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
