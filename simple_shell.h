#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>

void shell_print(const char *word);
void word_display(void);
void execute_word(const char *word_prompt);
void read_word(char *word_prompt, size_t size);

#endif /*SIMPLE_SHELL*/
