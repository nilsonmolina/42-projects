#include <unistd.h>

void	search_and_replace(char *str, char search, char replace);

int		main(int argc, char **argv)
{
	if (argc == 4 && (argv[2][1] == '\0' && argv[3][1] == '\0'))
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}

void	search_and_replace(char *str, char search, char replace)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] == search)
			write(1, &replace, 1);
		else
			write(1, &str[index], 1);
		index++;
	}
}
