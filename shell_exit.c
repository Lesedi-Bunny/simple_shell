#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * exit_builtin - Exit the shell.
 *
 * Description: This function terminates the shell program.
 * It does not take any arguments.
 * Usage: exit
 */
void exit_builtin(void)
{
	exit(EXIT_SUCCESS);
}
