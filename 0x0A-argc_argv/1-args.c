#include <stdio.h>

/**
* main - prints number or arguments
* @argc: int
* @argv: ptr
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
