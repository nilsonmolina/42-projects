#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int in(char letters[128], char c)
{
	int i = 0;
	while (i < 128)
	{
		if (c == letters[i])
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}

	char letters[128];
	int i = 0;
	while (i < 128)
		letters[i++] = 0;
	char *str1 = argv[1];
	char *str2 = argv[2];

	i = 0;
	while (*str1)
	{
		if (!in(letters, *str1))
		{
			letters[i] = *str1;
			ft_putchar(*str1);
			i++;
		}
		str1++;
	}
	while (*str2)
	{
		if (!in(letters, *str2))
		{
			letters[i] = *str2;
			ft_putchar(*str2);
			i++;
		}
		str2++;
	}
	ft_putchar('\n');
	return (0);
}
