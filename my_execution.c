#include "shell.h"

/**
 * execution - this commands executes what the user enters
 *@cp: command
 *@my_cmd:vector array of pointers to commands
 * Return: 0
 */
void my_execution(char *cp, char **my_cmd)
{
	pid_t kid_pid;
	int status;
	char **env = environ;

	kid_pid = fork();
	if (kid_pid < 0)
		perror(cp);
	if (kid_pid == 0)
	{
		execve(cp, my_cmd, env);
		perror(cp);
		free(cp);
		free_buffers(my_cmd);
		exit(98);
	}
	else
		wait(&status);
}
