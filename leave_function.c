#include "shell.h"

/**
* leave_buffers - frees buffers
* @buf: buffer to be freed
*
* Return: no return
*/
void leave_buffers(char **buf)
{
	int l = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[l])
	{
		free(buf[l]);
		l++;
	}
	free(buf);
}
