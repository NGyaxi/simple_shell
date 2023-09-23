#include "shell.h"

/**
* append_path - adds path to command
* @pathx: path of the command issued
* @commands: when user enters a command
*
* Return: buffers containing command with path on success
* the NULL returns on failure
*/
char *include_path(char *pathx, char *commands)
{
	char *mybuf;
	size_t i = 0, j = 0;

	if (commands == 0)
		commands = "";

	if (pathx == 0)
		pathx = "";

	mybuf = malloc(sizeof(char) * (_strlen(pathx) + _strlen(commands) + 2));
	if (!mybuf)
		return (NULL);

	while (pathx[i])
	{
		mybuf[i] = pathx[i];
		i++;
	}

	if (pathx[i - 1] != '/')
	{
		mybuf[i] = '/';
		i++;
	}
	while (commands[j])
	{
		mybuf[i + j] = commands[j];
		j++;
	}
	mybuf[i + j] = '\0';
	return (mybuf);
}
