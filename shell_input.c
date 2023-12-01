#include "simple_shell.h"

/**
 * read_word - read the word from the standard input
 * Return: 0
 */
void read_word(char *word_prompt, size_t size)
{
	if (fgets(word_prompt, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			shell_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			shell_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
    }
    word_prompt[strcspn(word_prompt, "\n")] = '\0';
}
