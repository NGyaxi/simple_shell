#include "shell.h"

/**
 * read_input - Reads input from the user
 * @command: Buffer to store the input
 * @size: Size of the buffer
 *
 * This function reads input from the user using fgets and removes the newline
 * character if present. It handles end-of-file conditions.
 */

void read_input(char *command, size_t size)
{
if (fgets(command, size, stdin) == NULL)
{
if (feof(stdin))
{
gyasi_debPrint("\n");
exit(EXIT_SUCCESS);
}
else
{
gyasi_debPrint("Wrong input!");
exit(EXIT_FAILURE);
}
}
command[strcspn(command, "\n")] = '\0';
}
