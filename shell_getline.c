#include "simple_shell.h"

/**
 * my_getline - Read a line from standard input.
 *
 * Description: Reads characters from standard input until a newline
 * Return: On success, NULL
 */
char *my_getline(void)
{
	static char buffer[1024];
	static ssize_t buffer_size;
	static ssize_t current_index;

	while (1)
	{
		/* Check if the buffer is empty */
		if (current_index >= buffer_size)
		{
			/* Read more characters into the buffer */
			buffer_size = read(STDIN_FILENO, buffer, sizeof(buffer));
			current_index = 0;

	if (buffer_size == -1)
	{
		/* Error reading input */
		return (NULL);
	}
	else if (buffer_size == 0)
	{
		/* End of input*/
		return (NULL);
		}
	}

	/* Check if a newline character is present in the buffer */
	if (buffer[current_index] == '\n')
	{
		/* Null-terminate the string and return */
		buffer[current_index] = '\0';
		current_index++;
		return (buffer);
	}

	/* Move to the next character in the buffer*/
	current_index++;
	}
}
