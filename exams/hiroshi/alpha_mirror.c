#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char *str;
	char decrementer;
	int counter;

	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	str = argv[1];
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
		{
			decrementer = *str;
			counter = 0;
			while ('a' < decrementer)
			{
				counter++;
				decrementer--;
			}
			ft_putchar('z' - counter);
		}
		else if ('A' <= *str && *str <= 'Z')
		{
			decrementer = *str;
			counter = 0;
			while ('A' < decrementer)
			{
				counter++;
				decrementer--;
			}
			ft_putchar('Z' - counter);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
	ft_putchar('\n');
	return 0;
}
