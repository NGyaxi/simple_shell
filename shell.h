#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* environment variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* handle built ins */
int inspector(char **mycmd, char *bufs);
void promptUser(void);
void hold_signal(int m);
char **tokenizer(char *line);
char *test_path(char **path, char *command);
char *include_path(char *pathx, char *commands);
int hold_builtin(char **commands, char *line);
void kill_cmd(char **commands, char *line);

void print_environ(void);

/* string handlers */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);

void my_execution(char *cp, char **my_cmd);
char *detect_path(void);

/* helper function for efficient free */
void leave_buffers(char **buf);

struct builtin
{
	char *env;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif /* SHELL_H */
