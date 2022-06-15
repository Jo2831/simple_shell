#include <stdio.h>
#include "main.h"
/**
 * main - prints hello world
 * @argc: number of arguments passed
 * @argv: the arguments passed
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char str[1000];
	pid_t pid;

	while (1)
	{
		printf("$ ");
		if (input_string(str) == 0)
		{
			pid = fork();
			if (pid == 0)
			{
				if (execve(str, argv, NULL) == -1)
					perror(argv[0]);
			}
			else
				wait(NULL);
		}
		else
		{
			printf("\n");
			break;
		}

	}
	return (0);
}
