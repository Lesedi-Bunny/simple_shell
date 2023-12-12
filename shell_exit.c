#include "simple_shell.h"

/**
 * shell_exit - exits the shell process
 * @exitStatus: process termination identifier
 * Return: 0
 */
void shell_exit(int exitStatus)
{
	shell_print("Exiting the shell window...\n");
	exit(exitStatus);
}
