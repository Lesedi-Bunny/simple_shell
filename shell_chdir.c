#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * change_directory - change the current working directory
 * @directory: The path to the directory to change to
 *
 * Return: 0 on success, -1 on failure
 */
int change_directory(const char *directory)
{
	if (chdir(directory) == -1)
	{
		perror("chdir");
		return (-1);
	}

	return (0);
}
