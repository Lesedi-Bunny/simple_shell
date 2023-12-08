#include "simple_shell.h"

/**
 * shell_exit - terminate normal process
 * @status: identifier
 * Return: 0
 */
void shell_exit(int status)
{
	if (status == 0)
	_exit(0);
}
