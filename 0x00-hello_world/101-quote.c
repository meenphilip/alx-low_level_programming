#include <stdio.h>
#include <unistd.h>
/**
 * main - main block
 * Description: Print text, followed
 * by a new line to the standard
 * error.
 * Return: 1
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg));
	return (1);
}
