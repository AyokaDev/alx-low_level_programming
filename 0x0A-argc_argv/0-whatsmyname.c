#include <stdio.h>
/**
 * main - Entry point
 * write a program that prints its name
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
