#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * show_prompt - Display the shell prompt.
 */
void show_prompt(void);

/**
 * gyasi_debPrint - Debugging print function (for development purposes).
 * @msg: The message to print.
 */
void gyasi_debPrint(const char *msg);

/**
 * read_input - Read user input into the command buffer.
 * @command: The buffer to store user input.
 * @size: The size of the buffer.
 */
void read_input(char *command, size_t size);

/**
 * execute_cmd - Execute a command.
 * @command: The command to execute.
 */
void execute_cmd(const char *command);

#endif /* SHELL_H */
