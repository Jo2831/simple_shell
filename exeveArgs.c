#include "main.h"
/**
 * execArg - execture commands
 *
 * @command: commands to print
 * @name: the command name
 */
void execArg(char **command, char *name)
{
    struct stat st;
	pid_t pid;

	if (stat(command[0], &st) == 0)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("Error");
			return;
		}
		else if (pid == 0)
		{
			if (execve(command[0], command, NULL) == -1)
				perror(name);
			exit(0);
		}
		else
		{
			wait(NULL);
			return;
		}
	}
	else
	{
		if (execve(command[0], command, NULL) == -1)
			perror(name);
		return;
	}
}
