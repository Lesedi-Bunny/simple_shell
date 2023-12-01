#include "simple_shell.h"

/**
 * execute_word - this function executes the function call
 * Return: 0
 */
void execute_word(const char *word_prompt)
{
	pid_t shell_id = fork();

	if (shell_id == -1)
	{
		shell_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (shell_id == 0)
	{
		char *args[256];
		int arg_count = 0;

	char *tokenizer = strtok((char *)word_prompt, " ");
	while (tokenizer != NULL)
	{
		args[arg_count++] = tokenizer;
		tokenizer = strtok(NULL, " ");
	}
	args[arg_count] = NULL;

	execvp(args[0], args);
	shell_print("Error executing command.\n");
	exit(EXIT_FAILURE);
	}
       	else
	{
        	wait(NULL);
	}
}
