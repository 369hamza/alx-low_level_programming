#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific message to standard error
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, sizeof(msg) - 1);
	return (1);
}
