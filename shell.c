#include "shell.h"

/**
 * main - Entry point for the simple shell program.
 * Return: Always 0.
 */
int main(void)
{
char input[120];
while (1)
{
show_prompt();
read_input(input, sizeof(input));
execute_cmd(input);
}
return (0);
}
