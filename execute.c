#include "shell.h"
#include <sys/wait.h>
/**
 * execute_cmd - Execute a command in a child process.
 * @command: The command to execute.
 */
void execute_cmd(const char *command)
{
pid_t kid_pid = fork();
if (kid_pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
else if (kid_pid == 0)
{
if (execlp(command, command, (char *)NULL) == -1)
{
perror("execve");
exit(EXIT_FAILURE);
}
}
else
{
wait(NULL);
}
}
