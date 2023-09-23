#include "shell.h"

/**
* kill_cmd - handles the exit command
* @commands: tokenized command
* @line: input read from stdin
*
* Return: no return
*/
void kill_cmd(char **commands, char *line)
{
	free(line);
	free_buffers(commands);
	exit(0);
}
