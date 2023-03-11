#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argumrent array
 * Return: 0 on success, 1 if 2 numbers are not given
 */

int main(int argc, char *argv[])
{
	int i, j, p;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	p = i * j;
	printf("%d\n", p);
	return (0);
}
