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

/* Function prototypes */
int shell_print(char *s);
int pass_betty(void);
void prompt(void);
char *user_inputs(void);
char **tokenizer(char *s);
int Betty(void);
char **tokenize(char *s, char *delim);
int exec(char **args);
void exiting(void);
/* int exec(char **args);*/
size_t word_len(char *str, char *delim);
char **tokenize(char *s, char *delim);
int execute(char **args);
void print_env(void);
void free_array(char **array);


#endif /* SHELL_H */
