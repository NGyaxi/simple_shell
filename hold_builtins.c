#include "shell.h"

/**
* handle_builtin - handles execution of builtin functions
* @commands: tokenized commands
* @line: input read from stdin
*
* Return: 1 if executed, 0 if not
*/
int hold_builtin(char **commands, char *line)
{
	struct builtin builtin = {"env", "exit"};

	if (_strcmp(*commands, builtin.env) == 0)
	{
		print_environ();
		return (1);
	}
	else if (_strcmp(*commands, builtin.exit) == 0)
	{
		kill_cmd(commands, line);
		return (1);
	}
	return (0);
}
