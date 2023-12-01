#include "simple_shell.h"

/**
 * main - checks the code
 * Return: 0
 */
int main (void)
{
	char word_prompt[256];

	while (true)
	{
		word_display();
		read_word(word_prompt, sizeof(word_prompt));
		execute_word(word_prompt);
	}
	return (0);
}
