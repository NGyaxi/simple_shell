#include "shell.h"
/**
 *inspector- checks to see weather its a built in function
 *@cmd: tokenized user input
 *@buf: line drived fromgetline function
 *Return: 1 if cmd excuted 0 if cmd is not executed
 */
int inspector(char **mycmd, char *bufs)
{
	if (hold_builtin(mycmd, bufs))
		return (1);
	else if (**mycmd == '/')
	{
		my_execution(mycmd[0], mycmd);
		return (1);
	}
	return (0);
}
