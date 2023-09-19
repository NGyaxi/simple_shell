#include "shell.h"
/**
 * execute_cmd - Execute a command with arguments in a child process.
 * @command: The command to execute.
 */
void execute_cmd(const char *command) {
pid_t pid;
char *token;
char *args[100];  /* Adjust the size as needed for your use case */
int i = 0;
token = strtok(command, " ");
while (token != NULL) {
args[i++] = token;
token = strtok(NULL, " ");
}
args[i] = NULL;  /* Null-terminate the args array */
pid = fork();
if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
} else if (pid == 0)
{
char *path = getenv("PATH");
char *dir = strtok(path, ":");
while (dir != NULL)
{
char cmd_path[1024];  /* Adjust the size as needed */
snprintf(cmd_path, sizeof(cmd_path), "%s/%s", dir, args[0]);
if (access(cmd_path, X_OK) == 0)
{
if (execve(cmd_path, args, NULL) == -1)
{
perror("execve");
exit(EXIT_FAILURE);
}
}
dir = strtok(NULL, ":");
}
/* If we reach here, the command was not found */
fprintf(stderr, "Command not found: %s\n", args[0]);
exit(EXIT_FAILURE);
} else {
wait(NULL);
}
}
