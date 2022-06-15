#include "main.h"

/**
 * input_string-  input string to str from stdin
 *
 * @str: to store the input string
 * Return: 0 on success
 */
int input_string(char *str)
{
	char *accept;
	size_t size = 1000;
	int x = 0, flag;

	accept = malloc(sizeof(char) * size);
	flag = getline(&accept, &size, stdin);

	if (flag != -1)
	{
		while (accept[x] != '\0')
		{
			if (accept[x] == 10)
				accept[x] = '\0';
			x++;
		}
		strcpy(str, accept);
		free(accept);
		return (0);
	}
	else
		return (1);
}
