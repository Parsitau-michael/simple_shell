#ifndef SHELL_H
#define SHELL_H

extern char **environ;

/* All required header files */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

/* Function prototypes */
int shell_print(char *s);
int pass_betty(void);
void prompt(void);
char *user_inputs(void);
size_t _strlen(char *str);
int _strcmp(char *str1, char *str2);
size_t word_len(char *str, char *delim);
char **tokenize(char *str, char *delim);
int execute(char **args);
void print_env(void);
void free_array(char **array);
void sigterm_handler(int signum);


#endif /* SHELL_H */
