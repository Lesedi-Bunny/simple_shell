#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>

void shell_print(const char *word);
void word_display(void);
void execute_word(const char *word_prompt);
void read_word(char *word_prompt, size_t size);
int shell_free(void **ptr);
void shell_exit(int exitStatus);
char *my_getline(void);
void execute_exit(void);
void env_builtin(char *envp[]);
int shell_env(int argc, char *argv[], char *envp[]);

#endif /*SIMPLE_SHELL*/
