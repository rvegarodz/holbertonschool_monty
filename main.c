#include "monty.h"

int main(int ac, char **av)
{
	FILE *file;
	char *line = NULL;
	size_t buffline = 0;
	

	/* checking number of argument */
	if (ac != 2)
		exit(EXIT_FAILURE);

	/* opening file */
	file = fopen(av[1], "r");

	/* getting text of open file */
	while (getline(&line, &buffline, file) != -1)
	{
		/* TOKENIZATION */

		printf("%s\n", line);
	}

	/* closing file */
	fclose(file);

	return (0);
}
