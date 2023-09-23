#include "shell.h"

/**
* print_env - prints the environment string to stdout
*
* Return: 0
*/
void print_environ(void)
{
	int q = 0;
	char **envs = environ;

	while (envs[q])
	{
		write(STDOUT_FILENO, (const void *)envs[q], _strlen(envs[q]));
		write(STDOUT_FILENO, "\n", 1);
		q++;
	}
}
