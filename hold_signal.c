#include "shell.h"

/**
 *hold_signal- it keeps track is interactive mode
 *@b: the signal number
 *Return: nothing
 */

void hold_signal(int b)
{
	(void)b;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
