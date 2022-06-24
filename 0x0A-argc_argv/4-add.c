#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * isNumber - checks if string  is a number
 * @s: string to check
 *
 * Return: true if string is number, otherwise return false
*/

bool isNumber(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (false);
		}
	}
	return (true);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 *
 * Return: 0 on success, 1 if an argument wasn't a number
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isNumber(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
