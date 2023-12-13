#include "simple_shell.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * env_builtin - Print the current environment variables.
 *
 * Description: This function prints the current environment variables
 * to the standard output without using the `printf` function or any
 * external variables. It uses the `write` function to write each
 * character of the environment variables to the standard output.
 *
 * @envp: The environment variables as a null-terminated array of strings.
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

/**
 * main - The entry point of the program.
 *
 * Description: This function serves as the entry point of the program.
 * It calls the `env_builtin` function with the environment variables
 * passed as the `envp` parameter.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 * @envp: The environment variables as a null-terminated array of strings.
 *
 * Return: The exit status of the program.
 */
int main(int argc, char *argv[], char *envp[])
{
	(void)argc;  /* Silence unused parameter warning */
	(void)argv;  /* Silence unused parameter warning */

	env_builtin(envp);

	return (0);
}
