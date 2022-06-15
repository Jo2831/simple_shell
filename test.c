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
	char str[1000],*cmd[1000];

	while (argc)
	{
		printf("$ ");
		if (input_string(str) == 0)
		{
			split_space(str,cmd);
			if (str[0] != '\0')
			{
				execArg(cmd,argv[0]);	
			}
			else
				continue;
		}
		else
		{
			break;
		}

	}
	return (0);
}
