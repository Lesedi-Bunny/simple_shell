#include "simple_shell.h"

/**
 * shell_print - this function mimicks the printf function
 * @word: string identifier
 * Return: 0
 */
void shell_print(const char *word)
{
	write(STDOUT_FILENO, word, strlen(word));
}
