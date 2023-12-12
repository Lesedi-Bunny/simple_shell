#include "simple_shell.h"

/**
 * shell_env -this function prints out the PATH
 * Return: 0
 */
char shell_env(void)
{
	char *path = getenv("PATH");

	if (path != NULL)
	{
		shell_print("PATH = %s\n", path);
	}
	else
	{
		shell_print("PATH environment variable not found.\n");
	}

	return (0);
}
