#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

/**
 * show_prompt - Displays the shell prompt.
 */
void show_prompt(void);

/**
 * gyasi_debPrint - Writes a message to standard output.
 * @msg: The message to write.
 */
void gyasi_debPrint(const char *msg);

/**
 * read_input - Reads input from the user.
 * @command: A pointer to a character array to store the input.
 * @size: The maximum size of the input.
 */
void read_input(char *command, size_t size);

/**
 * execute_cmd - Executes a command.
 * @command: The command to execute.
 */
void execute_cmd(char *command);

#endif /* SHELL_H */
