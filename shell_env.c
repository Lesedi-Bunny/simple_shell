#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * env_builtin - Print the current environment variables.
 *
 * Description: This function prints the current environment variables
 * to the standard output without using the `printf` function
 *
 * @envp: The environment variables as a null-terminated array of strings.
 * Return: The exit status of the program.
 */
void env_builtin(char *envp[])
{
	char **env_ptr = envp;

	while (*env_ptr != NULL)
	{
	char *env_var = *env_ptr;
	char *ptr = env_var;

	while (*ptr != '\0')
	{
		write(STDOUT_FILENO, ptr, 1);
		ptr++;
	}

	write(STDOUT_FILENO, "\n", 1);
	env_ptr++;
	}
}
