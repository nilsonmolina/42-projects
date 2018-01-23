#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int to_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return c;
	if ('a' <= c && c <= 'z')
		return c - 32;
	return (c);
}

int to_lower(char c)
{
	if ('A' <= c && c <= 'Z')
		return c + 32;
	if ('a' <= c && c <= 'z')
		return c;
	return (c);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int i = 1;
	int first_letter_flag;
	char *str;
	while (i != argc)
	{
		str = argv[i];
		first_letter_flag = 1;
		while (*str)
		{
			if (*str == ' ' || *str == '\t')
				ft_putchar(*str);
			else if (first_letter_flag)
			{
				ft_putchar(to_upper(*str));
				first_letter_flag = 0;
			}
			else if (!first_letter_flag)
				ft_putchar(to_lower(*str));
			if (*str == ' ' || *str == '\t')
				first_letter_flag = 1;
			str++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
