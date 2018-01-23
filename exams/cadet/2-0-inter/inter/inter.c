#include <unistd.h>

void	inter(char *str1, char *str2);

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

void	inter(char *str1, char *str2)
{
	int used_chars[128];
	int i;
	int j;

	i = 0;
	while (i < 128)
		used_chars[i++] = 0;
	i = 0;
	while (str1[i])
	{
		j = 0;
		while(str2[j])
		{
			if (str2[j] == str1[i] && used_chars[(int)(str2[j])] == 0)
			{
				used_chars[(int)(str2[j])] = 1;
				write(1, &str2[j], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}
