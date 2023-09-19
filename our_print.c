#include "shell.h"

/**
 * gyasi_debPrint - Print debug message to standard output
 * @msg: The message to be printed
 *
 * This function prints a debug message to the standard output.
 *
 * Return: None
 */
void gyasi_debPrint(const char *msg)
{
write(STDOUT_FILENO, msg, strlen(msg));
}
