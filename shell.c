#include "shell.h"

/**
 * main - Entry point of the simple shell program
 *
 * Return: Always 0.
 */
int main(void)
{
char command[120];
while (1)
{
show_prompt();
read_input(command, sizeof(command));
execute_cmd(command);
}
return (0);
}
