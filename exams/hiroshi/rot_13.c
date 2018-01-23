#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char letter;
	int i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	char *str;
	str = argv[1];
	while (*str)
	{
		i = 13;
		letter = *str;
		while (i--)
		{
			if (('a' <= letter && letter <= 'z') || ('A' <= letter && letter <= 'Z'))
			{
				if (letter == 'z')
					letter = 'a';
				else if (letter == 'Z')
					letter = 'A';
				else
					letter++;
			}
		}
		str++;
		ft_putchar(letter);
	}
	ft_putchar('\n');
}
