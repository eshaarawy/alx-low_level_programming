#include <stdio.h>
#include <stdlib.h>

/**
* main - prints number or arguments
* @argc: int
* @argv: ptr
* Return: 0
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
