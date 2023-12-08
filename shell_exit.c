#include "simple_shell.h"

/**
 * execute_exit - terminate normal process
 *
 * Description: This function terminates the shell program
 *
 * Return: 0
 */
void execute_exit(void)
{
	const char *exit_message = "Exiting the shell...\n";

	write(STDOUT_FILENO, exit_message, strlen(exit_message));
	_exit(0);
}
