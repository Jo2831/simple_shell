#include "main.h"
/**
 * split_space - split one string to chunks
 * 
 * @str: string to split
 * @par: to store the chunks
 */
void split_space(char *str, char **par)
{
	int i = 0;
	char *piece;

	piece = strtok(str, " ");

	for (i = 0; piece != NULL && i < 1000; i++)
	{
		par[i] = piece;
		piece = strtok(NULL, " ");
	}
	par[i] = NULL;
}