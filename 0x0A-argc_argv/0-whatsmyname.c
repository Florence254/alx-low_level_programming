#include "main.h"
#include <stdio.h>

/**
 * main - print programme name
 * @argc: argument counter
 * @argv: pointer argurment array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
