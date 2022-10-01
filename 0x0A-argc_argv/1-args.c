#include <stdio.h>
/**
 * main - A program that prints the name followed by a newline
 * @argc: number of arguments
 * @argv: a vector that stores arguments
 */

int main(int argc, char **argv __attribute__((unused)))
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
