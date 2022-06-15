#ifndef __HEADER__
#define __HEADER__

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
int input_string(char *str);
void execArg(char **command, char *name);
void split_space(char *str, char **par);

#endif
