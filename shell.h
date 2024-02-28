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
<<<<<<< HEAD
<<<<<<< HEAD
char **tokenizer(char *s);
int Betty(void);
=======
char **tokenize(char *s, char *delim);
>>>>>>> 5b27d066d683eb8d4632369a2b1da34d53461f47
int exec(char **args);
/* int exec(char **args);*/
=======
size_t word_len(char *str, char *delim);
char **tokenize(char *s, char *delim);
int execute(char **args);
void print_env(void);
void free_array(char **array);
>>>>>>> 421fe3d4b3578bb5ca3d7d346641dad58a28255b


#endif /* SHELL_H */
