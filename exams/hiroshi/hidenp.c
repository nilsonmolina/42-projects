#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}

	char *str1 = argv[1];
	char *str2 = argv[2];
	while (*str2 && *str1)
	{
		if (*str2 == *str1)
		{
			str1++;
			str2++;
		}
		else
			str2++;
	}
	if (!*str1)
		ft_putchar('1');
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
