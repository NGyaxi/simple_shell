#include "shell.h"

/**
 * show_prompt - Displays the shell prompt.
 */
void show_prompt(void)
{
gyasi_debPrint("blackHat$ ");
}

/**
 * gyasi_debPrint - Writes a message to standard output.
 * @msg: The message to write.
 */
void gyasi_debPrint(const char *msg)
{
write(STDOUT_FILENO, msg, strlen(msg));
}

/**
 * read_input - Reads input from the user.
 * @input: A pointer to a character array to store the input.
 * @size: The maximum size of the input.
 */
void read_input(char *input, size_t size)
{
if (fgets(input, size, stdin) == NULL)
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
input[strcspn(input, "\n")] = '\0';
}
