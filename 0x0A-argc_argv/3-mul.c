#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: Argument count
 * @argv: Argument value
 *
 * Return: 0 or 1 if otherwise
 */
int main(int argc, char *argv)
{
	int i;
	int result = 1;

	if (argc <= 2 & argv > 0)
	{
		for (i = 1;i < argc; i++)
			result = result * mul;
			mul = atoi(argv[i];
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
		return (1);
}