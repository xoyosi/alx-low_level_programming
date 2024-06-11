#include "3-calc.h"

/**
 * main - the main function that receive the args
 *
 * @argc: the argument count
 *
 * @argv: the argument vector
 *
 * Return: the result
 */

int main(int argc, char **argv)
{
	int n1, n2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = operation(n1, n2);

	printf("%d\n", result);

	return (0);
}
