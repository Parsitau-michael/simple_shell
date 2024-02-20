#ifndef SHELL_H
#define SHELL_H

#define MAX_T 20

/* All required header files */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Function prototypes */
int shell_print(char *s);
void prompt(void);
char *user_inputs(void);
char **tokenizer(char *s);
int exec(char **args);
/* int exec(char **args);*/


#endif /* SHELL_H */
