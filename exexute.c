#include "shell.h"
/**
 * execute_cmd - Executes a command.
 * @input: The command to execute.
 */
void execute_cmd(char *input)
{
pid_t child_pid;
int status;

child_pid = fork();

if (child_pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
char *args[20];
int arg_count = 0;

char *token = strtok(input, " ");
while (token != NULL)
{
args[arg_count++] = token;
token = strtok(NULL, " ");
}

args[arg_count] = NULL;
if (execve(args[0], args, NULL) == -1)
{
perror("execve");
exit(EXIT_FAILURE);
}
}
else
{
wait(&status);
}
}
