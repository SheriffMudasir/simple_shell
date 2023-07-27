#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

char **tokenizer(char *line);
char *_getenv(const char *name);
char *_path(char *command);
char *join_path(char *path, char *command);
int execute(char **argv);
int builtin_command(char **argv);
int nonbuiltin_command(char **argv);
int number_token(char *line);
void free_memory(char *line,char **tokens);
void free_tokens(char **tokens);

#endif
