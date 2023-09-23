#include "shell.h"

/**
* find_path - finds the path from the global enviroment
* Return: NULL if path is not found or path if path is found.
*/
char *detect_path(void)
{
	int x;
	char **envs = environ, *path = NULL;

	while (*envs)
	{
		if (_strncmp(*envs, "PATH=", 5) == 0)
		{
			path = *envs;
			while (*path && x < 5)
			{
				path++;
				x++;
			}
			return (path);
		}
		envs++;
	}
	return (NULL);
}
