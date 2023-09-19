#include "shell.h"
#include <sys/wait.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;

/**
 * execute_cmd - Execute a command using fork and execve
 * @command: The command to execute
 *
 * This function creates a child process using fork and executes
 * the specified command in the child process using execve.
 *
 * Return: None
 */
void execute_cmd(const char *command) {
    pid_t kid_pid = fork();

    if (kid_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (kid_pid == 0) {
        execve(command, (char *const *)command, environ);
        perror("execve");
        exit(EXIT_FAILURE);
    } else {
        wait(NULL);
    }
}
