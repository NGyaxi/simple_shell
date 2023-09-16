#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point for the simple shell program.
 *
 * Return: 0 on success, an error code on failure.
 */
int main(void)
{
char buffer[1024];
ssize_t bytes_read;
int status = 0;

while (1)
{
write(STDOUT_FILENO, "#cisfun$ ", 9);
bytes_read = read(STDIN_FILENO, buffer, sizeof(buffer));
if (bytes_read == 0) /* EOF (Ctrl+D) */
break;
if (bytes_read == -1)
{
perror("read");
status = 1;
break;
}
/* Null-terminate the input string */
buffer[bytes_read] = '\0';

/* Execute the command (replace with your code) */
/* For now, we'll just print the command */
write(STDOUT_FILENO, "You entered: ", 13);
write(STDOUT_FILENO, buffer, bytes_read);
}
return (status);
}
