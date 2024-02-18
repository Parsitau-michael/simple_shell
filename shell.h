#ifndef SHELL_H
#define SHELL_H

/* All required header files */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

/* Function prototypes */
int shell_print(char *s);
void prompt(void);
int findpid(void);
int ppid(void);

#endif /* SHELL_H */
